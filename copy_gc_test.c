#include <stdio.h>
#include "copy_gc.h"


int main(int argc,char** argv){
	struct s_arena* arena;
	struct single_bdescr* single_block;
	struct big_bdescr   * big_blocks;

	/* test for block allocator */
	arena = new_arena();
	single_block = new_single_block(arena);
	big_blocks   = new_big_blocks(arena,200,200);
	printf("single : %08x\n",(unsigned int)single_block);
	printf("big : %08x\n",(unsigned int)big_blocks);
	single_block = new_single_block(arena);
	big_blocks   = new_big_blocks(arena,200,200);
	printf("single : %08x\n",(unsigned int)single_block);
	printf("big : %08x\n",(unsigned int)big_blocks);
	single_block = new_single_block(arena);
	big_blocks   = new_big_blocks(arena,200,200);
	printf("single : %08x\n",(unsigned int)single_block);
	printf("big : %08x\n",(unsigned int)big_blocks);
	/*  */
	return 0;
}

