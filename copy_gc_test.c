#include <stdio.h>
#include "copy_gc.h"


int main(int argc,char** argv){
	struct s_arena* arena;
	struct single_bdescr* single_block;
	struct big_bdescr   * big_blocks;
	void* ptr;

	/* test for block allocator */
	arena = new_arena();
	single_block = new_single_block(arena);
	printf("single : %08x\n",(unsigned int)single_block);
	big_blocks   = new_big_blocks(arena,200);
	printf("big : %08x\n",(unsigned int)big_blocks);
	single_block = new_single_block(arena);
	printf("single : %08x\n",(unsigned int)single_block);
	big_blocks   = new_big_blocks(arena,200);
	printf("big : %08x\n",(unsigned int)big_blocks);
	single_block = new_single_block(arena);
	printf("single : %08x\n",(unsigned int)single_block);
	big_blocks   = new_big_blocks(arena,200);
	printf("big : %08x\n",(unsigned int)big_blocks);

	arena = new_arena();
	ptr = mem_allocate(arena, 10, 10);
	printf("alloc : %08x\n",(unsigned int)ptr);
	ptr = mem_allocate(arena, 1000000, 10);
	printf("alloc : %08x\n",(unsigned int)ptr);
	int i;
	for(i=0;i<20;i++){
		ptr = mem_allocate(arena, 245, 10);
		printf("alloc : %08x\n",(unsigned int)ptr);
	}
	/*  */
	return 0;
}

