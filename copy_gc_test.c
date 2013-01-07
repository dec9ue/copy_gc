#include <stdio.h>
#include "copy_gc.h"

void dump(void* ptr, size_t size){
	int unit = 16;
	int i;
	unsigned char* cur = (unsigned char*) ptr;
	if( ptr == NULL){
		printf("%s : NULL ptr\n",__FUNCTION__);
		return;
	}
	for( i = 0; i < size ; i++){
		switch( (i + 1) % unit ){
		case 0:
			printf("%02x\n",*(cur+i));	
			break;
		case 1:
			printf("%08x : %02x ",(unsigned int)(cur+i),*(cur+i));	
			break;
		default:
			printf("%02x ",*(cur+i));
			break;
		
		}
	}
}

int main(int argc,char** argv){
	struct s_arena* arena;
	struct single_bdescr* single_block;
	struct big_bdescr   * big_blocks;
	void* ptr;

	{
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
	}

	{
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
	}
	{
		arena = new_arena();
		ptr = mem_allocate(arena, 10, 10);
		printf("root alloc : %08x\n",(unsigned int)ptr);
		mem_add_root(arena,ptr);
		int i;
		for(i=0;i<10;i++){
			int j;
			((void**)ptr)[i] = mem_allocate(arena, (i+1)*40, i);
			printf("alloc : %08x\n",(unsigned int)((void**)ptr)[i]);
			for(j = 0; j < i ; j++){
				((void***)ptr)[i][j] = mem_allocate(arena, (j+1)*35, 0);
				printf("alloc : %08x\n",(unsigned int)((void***)ptr)[i][j]);
			}
		}
		perform_gc(arena);
	}
	/*  */
	return 0;
}
	
