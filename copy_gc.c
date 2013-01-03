#include <stdlib.h>
#include "queue.h"
#include "copy_gc.h"

/*
 *******************************
 * BLOCK ALLOCATORS
 *******************************
 */
#define MEGA_BLOCK_SIZE (1UL << 20)
#define BLOCK_SIZE      (1UL << 12)

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
}

struct single_bdescr* new_single_block(struct s_arena* arena){
	struct single_bdescr* new_block = new_blocks(arena,1);
	init_single_block(new_block);
	return new_block;
}

void init_big_block(struct big_bdescr* new_blocks, unsigned int count, unsigned int nptrs){
	new_blocks->nblocks = count;
	new_blocks->nptrs   = nptrs;
}

struct big_bdescr* new_big_blocks(struct s_arena* arena, unsigned int count, unsigned int nptrs){
	void* new_block = new_blocks(arena,count);
	init_big_block(new_block,count,nptrs);
	return (struct big_bdescr*)new_block;
}
/*
 *******************************
 * BLOCK POOLS
 *******************************
 */

/*
 *******************************
 * High Level Allocators & GC
 *******************************
 */
void evacuate(void** src, void *obj, struct single_bdescr* to_space)
{
}

