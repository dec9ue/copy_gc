#include <stdlib.h>
#include "queue.h"
#include "copy_gc.h"

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
	return arena;
}

struct mega_bdescr* new_megablock(struct s_arena* arena){
	struct mega_bdescr* descr = (struct mega_bdescr*) aligned_memblock(MEGA_BLOCK_SIZE,MEGA_BLOCK_SIZE);
	descr->nblocks = MEGA_BLOCK_SIZE / BLOCK_SIZE;
	return descr;
}

void* new_blocks_from_megablock(struct mega_bdescr** mega_block,unsigned int count){
	struct mega_bdescr* old_mega_block = (*mega_block);
	struct mega_bdescr* new_mega_block = (old_mega_block) + (count * (BLOCK_SIZE / sizeof(struct mega_bdescr*)));
	/* if nblocks == count, no more blocks remains and writing over the area causes to memory corruption. */
	if(old_mega_block->nblocks > count){
		(*mega_block) = new_mega_block;
		new_mega_block->nblocks = old_mega_block->nblocks - count;
	}
	return (void*)old_mega_block;
}

void* new_blocks(struct s_arena* arena,size_t count){
	/* TODO better allocation sequence. it will require TAILQ. */
	struct mega_bdescr*  mega_block = SLIST_FIRST(&(arena->mega_blocks));
	struct single_bdescr* new_block = NULL;
	void* new_vblocks = NULL;

	if(count > ( MEGA_BLOCK_SIZE / BLOCK_SIZE)){
		/* cannot allocate! */
		return NULL;
	}

	if(mega_block == NULL){
		mega_block = new_megablock(arena);
		SLIST_INSERT_HEAD(&(arena->mega_blocks),mega_block,link);
	}
	/* now mega_block is non-NULL */
	if(mega_block->nblocks >= count) {
		mega_block = new_megablock(arena);
		SLIST_INSERT_HEAD(&(arena->mega_blocks),mega_block,link);
	}
	new_vblocks = new_blocks_from_megablock(&mega_block,count);
	return new_vblocks;
}

void init_single_block(struct single_bdescr* new_block){
	new_block->bdescr.type = E_SINGLE;
}

struct single_bdescr* new_single_block(struct s_arena* arena){
	struct single_bdescr* new_block = new_blocks(arena,1);
	init_single_block(new_block);
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
		arena->cur_words = 0;
	}
	return res;
}
void prepend_new_single_block(struct s_arena* arena){
	struct single_bdescr* block = find_new_single_block(arena);
	arena->cur_words = 0;
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

void mem_add_root(struct s_arena* arena, void* root){
}

void* mem_allocate(struct s_arena* arena, size_t size, unsigned int nptrs){
	void* ptr;
	if( size > BIG_THREASHOLD){
		/* BIG */
		/* TODO THIS MAY CONATIN ALIGNMENT BUG */
		unsigned int block_counts = (sizeof(struct big_bdescr)+sizeof(void*)*size-1)/BLOCK_SIZE + 1;
		struct big_bdescr* big_block = find_new_big_blocks(arena,block_counts);
		big_block-> size = size;
		big_block->nptrs = nptrs;
		ptr = (sizeof(struct big_bdescr)/sizeof(void*)) + (void*)big_block;
	}else{
		/* TODO THIS MAY CONATIN ALIGNMENT BUG */
 		struct single_bdescr* single_block = find_current_single_block(arena);
		if((arena->cur_words + size +1)*sizeof(void*) + sizeof(struct single_bdescr) > BLOCK_SIZE){
			prepend_new_single_block(arena);
 			single_block = find_current_single_block(arena);
		}
		ptr = ((void*)single_block) + (1+(arena->cur_words) + (sizeof(struct single_bdescr)/sizeof(void*)));
		arena->cur_words += size + 1;
		if((arena->cur_words + 2)*sizeof(void*) + sizeof(struct single_bdescr) > BLOCK_SIZE){
			prepend_new_single_block(arena);
 			single_block = find_current_single_block(arena);
		}
	}
	return ptr;
}

void* mem_allocate_with_finalizer(struct s_arena* arena, size_t size, unsigned int nptrs,void (*finalizer)()){
	void* ptr;
	/* BIG */
	/* TODO THIS MAY CONATIN ALIGNMENT BUG */
	unsigned int block_counts = (sizeof(struct big_bdescr)+sizeof(void*)*size-1)/BLOCK_SIZE + 1;
	struct big_bdescr* big_block = find_new_big_blocks(arena,block_counts);
	big_block-> size = size;
	big_block->nptrs = nptrs;
	ptr = (sizeof(struct big_bdescr)/sizeof(void*)) + (void*)big_block;
	return ptr;
}

void perform_gc(struct s_arena* arena){
}

void evacuate(void** src, void *obj, struct single_bdescr* to_space)
{
}

