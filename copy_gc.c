#include <stdio.h>
#include "queue.h"
#include "copy_gc.h"

#define debug(x,...) printf(x,__VA_ARGS__)

#define WORDS_OF(v)   (((v-1)/sizeof(void*))+1)
#define WORDS_OF_TYPE(type)   WORDS_OF(sizeof(type))

/*
 *******************************
 * LOW LAYER
 *******************************
 */
/* for allocation for page */
static void* aligned_memblock(size_t size,size_t alignment){
	void* ptr;
	int res = posix_memalign(&ptr,alignment,size);
	if(res != 0) { return NULL;}
	return ptr;
}

/* for small allocation */
static void* sysmalloc(size_t size){
	return malloc(size);
}

/*
 *******************************
 * BLOCK ALLOCATORS
 *******************************
 */
#define MEGA_BLOCK_SIZE (1UL << 20)
#define BLOCK_SIZE      (1UL << 12)

struct s_arena* new_arena(){
	struct s_arena* arena = (struct s_arena*) malloc(sizeof(struct s_arena));
	SLIST_INIT(&arena->blocks);
	SLIST_INIT(&arena->free_blocks);
	SLIST_INIT(&arena->mega_blocks);
	SLIST_INIT(&arena->big_blocks);
	debug("%s sizeof(single_bdescr) %0x, sizeof(big_bdescr) %0x, sizeof(void*) %0x\n",__FUNCTION__,sizeof(struct single_bdescr),sizeof(struct big_bdescr),sizeof(void*));
	return arena;
}

struct mega_bdescr* new_megablock(struct s_arena* arena){
	struct mega_bdescr* descr = (struct mega_bdescr*) aligned_memblock(MEGA_BLOCK_SIZE,MEGA_BLOCK_SIZE);
	descr->nblocks = MEGA_BLOCK_SIZE / BLOCK_SIZE;
	debug("new megablock at %08x\n",(unsigned int)descr);
	return descr;
}

void* new_blocks_from_megablock(struct mega_bdescr** mega_block,unsigned int count){
	int offset_words = count * BLOCK_SIZE;
	struct mega_bdescr* old_mega_block = (*mega_block);
	struct mega_bdescr* new_mega_block = (struct mega_bdescr*)(((unsigned char*)old_mega_block) + offset_words);
	/* if nblocks == count, no more blocks remains and writing over the area causes to memory corruption. */
	if(old_mega_block->nblocks > count){
		(*mega_block) = new_mega_block;
		new_mega_block->nblocks = old_mega_block->nblocks - count;
	} else {
		(*mega_block) = NULL;
	}
	debug("old megablock : %08x\n",(unsigned int)old_mega_block);
	debug("new megablock : %08x\n",(unsigned int)new_mega_block);
	return (void*)old_mega_block;
}

void* new_blocks(struct s_arena* arena,size_t count){
	/* TODO better allocation sequence. it will require TAILQ. */
	struct mega_bdescr*  mega_block = SLIST_FIRST(&(arena->mega_blocks));
	struct single_bdescr* new_block = NULL;
	void* new_vblocks = NULL;

	if(count > ( MEGA_BLOCK_SIZE / BLOCK_SIZE)){
		debug("ERROR: %s cannot allocate size %08x\n",__FUNCTION__,count);
		return NULL;
	}

	if(mega_block == NULL){
		mega_block = new_megablock(arena);
		SLIST_INSERT_HEAD(&(arena->mega_blocks),mega_block,link);
	}
	/* now mega_block is non-NULL */
	if(mega_block->nblocks <= count) {
		mega_block = new_megablock(arena);
		SLIST_INSERT_HEAD(&(arena->mega_blocks),mega_block,link);
	}
	SLIST_REMOVE_HEAD(&(arena->mega_blocks),link);
	new_vblocks = new_blocks_from_megablock(&mega_block,count);
	if(mega_block != NULL){
		SLIST_INSERT_HEAD(&(arena->mega_blocks),mega_block,link);
	}
	return new_vblocks;
}

void init_single_block(struct single_bdescr* new_block){
	new_block->bdescr.type = E_SINGLE;
}

struct single_bdescr* new_single_block(struct s_arena* arena){
	struct single_bdescr* new_block = new_blocks(arena,1);
	init_single_block(new_block);
	debug("new single block at %08x\n",(unsigned int)new_block);
	return new_block;
}

void init_big_block(struct big_bdescr* new_blocks, unsigned int count){
	new_blocks->bdescr.type = E_BIG;
	new_blocks->nblocks = count;
	new_blocks->size    = 0;
	new_blocks->nptrs   = 0;
}

struct big_bdescr* new_big_blocks(struct s_arena* arena, unsigned int count){
	void* new_block = new_blocks(arena,count);
	debug("new big block at %08x\n",(unsigned int)new_block);
	init_big_block(new_block,count);
	return (struct big_bdescr*)new_block;
}

/*
 *******************************
 * BLOCK POOLS
 *******************************
 */

struct single_bdescr* find_new_single_block(struct s_arena* arena){
	struct single_bdescr* res = (struct single_bdescr*)SLIST_FIRST(&(arena->free_blocks));
	if(res == NULL){
		res = new_single_block(arena);
	}else{
		SLIST_REMOVE_HEAD(&(arena->free_blocks),link);
		init_single_block(res);
	}
	return res;
}

struct single_bdescr* find_current_single_block(struct s_arena* arena){
	struct single_bdescr* res = (struct single_bdescr*)SLIST_FIRST(&(arena->blocks));
	if(res == NULL){
		res = find_new_single_block(arena);
		SLIST_INSERT_HEAD(&(arena->blocks),(struct bdescr*)res,link);
		arena->cur_words = WORDS_OF_TYPE(struct single_bdescr);
	}
	return res;
}
void prepend_new_single_block(struct s_arena* arena){
	struct single_bdescr* block = find_new_single_block(arena);
	arena->cur_words = WORDS_OF_TYPE(struct single_bdescr);
	SLIST_INSERT_HEAD(&(arena->blocks),(struct bdescr*)block,link);
}

void free_single_block(struct s_arena* arena,struct single_bdescr* block){
	SLIST_INSERT_HEAD(&(arena->free_blocks),(struct bdescr*)block,link);
}

struct big_bdescr* find_new_big_blocks(struct s_arena* arena, unsigned int count){
	return new_big_blocks(arena,count);
}

void free_big_block(struct s_arena* arena,struct big_bdescr* block){
	unsigned int count = block->nblocks;
	void* vblock = (void*) block;
	for(;count >0 ; count--){
		struct single_bdescr* single_block = (struct single_bdescr*)vblock;
		init_single_block(single_block);
		SLIST_INSERT_HEAD(&(arena->free_blocks),(struct bdescr*)single_block,link);
		vblock += (BLOCK_SIZE / sizeof(void*));
	}
}

/*
 *******************************
 * High Level Allocators & GC
 *******************************
 */
#define BIG_THREASHOLD 256
#define IS_PTR(x)     (1)
#define GET_BLOCK(x)  ((void*)(((unsigned int)x) & (~(BLOCK_SIZE - 1))))
#define GET_SIZE(x)   (((unsigned int)(((void*)x)-1))>>2  & 0x7ff)
#define GET_NPTR(x)   (((unsigned int)(((void*)x)-1))>>12 & 0x7ff)
#define SAVED_BITS(x) (((unsigned int)x) & 0x3)
#define PTR_BITS(x)   ((void*)(((unsigned int)x) & ~(0x3)))
#define BLOCK_TYPE(x) (((bdescr*)GET_BLOCK(x))->type)

/*
 *******************************
 * High Level Allocators & GC
 *******************************
 */

static void* mem_big_allocate(struct s_arena* arena, size_t size, unsigned int nptrs){
	/* TODO THIS MAY CONATIN ALIGNMENT BUG */
	size_t size_in_words = WORDS_OF(size);
	unsigned int block_counts = ((WORDS_OF_TYPE(struct big_bdescr)+size_in_words-1)*sizeof(void*))/BLOCK_SIZE + 1;
	debug("%s big_block size: %d block_counts : %d\n",__FUNCTION__,size,block_counts);
	debug("%s big_block size: %d size_in_words : %d\n",__FUNCTION__,size,size_in_words);
	struct big_bdescr* big_block = find_new_big_blocks(arena,block_counts);
	big_block-> size = size_in_words;
	big_block->nptrs = nptrs;
	return sizeof(struct big_bdescr) + (unsigned char*)big_block;
}

static void* mem_small_allocate(struct s_arena* arena, size_t size, unsigned int nptrs){
	/* TODO THIS MAY CONATIN ALIGNMENT BUG */
	void* ptr;
 	struct single_bdescr* single_block = find_current_single_block(arena);
	const int block_offset_words = WORDS_OF_TYPE(struct single_bdescr);
	size_t size_in_words = WORDS_OF(size);

	if((arena->cur_words + size +1)*sizeof(void*) > BLOCK_SIZE){
		prepend_new_single_block(arena);
 		single_block = find_current_single_block(arena);
	}
	ptr = ((void*)single_block) + ((arena->cur_words) +1) * sizeof(void*);
	arena->cur_words += size_in_words + 1;
	if((arena->cur_words + 2)*sizeof(void*) + block_offset_words > BLOCK_SIZE){
		prepend_new_single_block(arena);
 		single_block = find_current_single_block(arena);
	}
	debug("%s small_block size : %d size_in_words : %d\n",__FUNCTION__,size,size_in_words);
	return ptr;
}

/* here , size_t size in bytes , not words */
void* mem_allocate(struct s_arena* arena, size_t size, unsigned int nptrs){
	void* ptr;
	if( size > BIG_THREASHOLD){
		ptr = mem_big_allocate(arena,size,nptrs);
	}else{
		ptr = mem_small_allocate(arena,size,nptrs);
	}
	return (void*)ptr;
}

void* mem_allocate_with_finalizer(struct s_arena* arena, size_t size, unsigned int nptrs,void (*finalizer)()){
	/* BIG */
	/* TODO THIS MAY CONATIN ALIGNMENT BUG */
	/* TODO ADD FILNALIZER SUPPORT */
	void* ptr;
	unsigned int block_counts = (sizeof(struct big_bdescr)+sizeof(void*)*size-1)/BLOCK_SIZE + 1;
	struct big_bdescr* big_block = find_new_big_blocks(arena,block_counts);
	big_block-> size = size;
	big_block->nptrs = nptrs;
	ptr = (sizeof(struct big_bdescr)/sizeof(void*)) + (void*)big_block;
	return ptr;
}

/*
 *******************************
 * GC
 *******************************
 */

void mem_add_root(struct s_arena* arena, void* root){
	arena->root = root;
}

void perform_gc(struct s_arena* arena){
}

void evacuate_small(void** src, void *obj, struct single_bdescr* to_space) {
}

void scavenge_small(void* obj){
}

void scavenge_big(void* obj){
}

void mark_big(void* obj){
}

