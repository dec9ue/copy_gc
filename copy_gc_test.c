#include <stdio.h>
#include "copy_gc.h"

#define GET_SIZE(x)   (((*(((unsigned int*)x)-1))>> 2) & 0x3ff)
#define SET_SIZE(x,s) do{*(((unsigned int*)x)-1)|=((s&0x3ff)<< 2);}while(0)
#define GET_NPTR(x)   (((*(((unsigned int*)x)-1))>>12) & 0x3ff)
#define SET_NPTR(x,n) do{*(((unsigned int*)x)-1)|=((s&0x3ff)<<12);}while(0)

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

void dump_naive(void* ptr,size_t size){
	unsigned char* p = ((unsigned char*)ptr);
	const int unit = 16;
	int i;
	for( i = 0; i < size  ; i++){
		switch( (i+1)%unit ){
		case 0:
			printf("%02x\n",*(p+i));	
			break;
		case 1:
			printf("%08x : %02x ",(unsigned int)(p+i),*(p+i));
			break;
		default:
			printf("%02x ",*(p+i));
			break;
		}
#if 0
		if((i == 31) && (size > 64) ){
			printf("       :\n");
			i += ((size / 16) -sizeof(void*)) * 16;
		}
#endif
	}
	if( (i % unit) != 0){
		printf("\n");
	}
}

void dump_small(void*ptr,size_t size_in_words){
	void* head = *(((void**)ptr)-1);
	if(((unsigned int)head) & 0x01 != 0){
		printf("ptr : %08x\n",head);
	} else {
		int size = GET_SIZE(ptr);
		int nptr = GET_NPTR(ptr);
		printf("size : %08x(%d) nptrs : %08x(%d) (ptr : %08x)\n",size,size,nptr,nptr,head);
	}
	dump_naive(ptr-sizeof(void*),sizeof(void*)*(size_in_words+2));
}

int main(int argc,char** argv){
	struct s_arena* arena;
	struct single_bdescr* single_block;
	struct big_bdescr   * big_blocks;

#if 0
	{
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
	}

	{
		void* ptr;
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
#endif
	
#if 0
	{
		void* ptr;
		//unsigned int v = 0xdeadbeef;
		unsigned int v = 0xffffffff;
		unsigned int w = 0x0;
		void* a = (void*)(1+&v);
		void* b = (void*)(1+&w);
		unsigned int i = GET_SIZE(a);
		SET_SIZE(b,i);
		printf("v : %08x\n",(unsigned int)v);
		printf("a : %08x\n",*(unsigned int*)a);
		printf("a-: %08x\n",*(((unsigned int*)a)-1));
		printf("s : %08x\n",(unsigned int)i);
		printf("b : %08x\n",*(unsigned int*)b);
		printf("b-: %08x\n",*(((unsigned int*)b)-1));
		printf("bs: %08x\n",GET_SIZE(b));
		
	}
#endif
#if 0
	{
		// simple patetrn
		void* ptr;
		arena = new_arena();
		ptr = mem_allocate(arena, 10, 10);
		printf("root alloc : %08x\n",(unsigned int)ptr);
		mem_add_root(arena,ptr);
		int i;
		for(i=0;i<10;i++){
			int j;
			((void**)ptr)[i] = mem_allocate(arena, (i+1)*10, i);
			printf("alloc : %08x\n",(unsigned int)((void**)ptr)[i]);
			for(j = 0; j < i ; j++){
				((void***)ptr)[i][j] = mem_allocate(arena, (j+1)*8, 0);
				printf("alloc : %08x\n",(unsigned int)((void***)ptr)[i][j]);
			}
		}
		printf("dumping ptr:  %08x\n",ptr);
		dump_small(ptr,10);
		perform_gc(arena);
	}
#endif
	{
		// with forwarding
		void* ptr;
		arena = new_arena();
		ptr = mem_allocate(arena, 10, 10);
		printf("root alloc : %08x\n",(unsigned int)ptr);
		mem_add_root(arena,&ptr);
		int i;
		for(i=0;i<10;i++){
			int j;
			((void**)ptr)[i] = mem_allocate(arena, (i+1)*10, i);
			printf("alloc : %08x\n",(unsigned int)((void**)ptr)[i]);
			void* small_ptr = mem_allocate(arena, 8, 0);
			void* big_ptr   = mem_allocate(arena, 256, 0);
			printf("alloc small : %08x\n",(unsigned int)small_ptr);
			printf("alloc big   : %08x\n",(unsigned int)big_ptr);
			for(j = 0; j < i ; j++){
				((void***)ptr)[i][j] = ((j%2)==0?small_ptr:big_ptr);
//				printf("alloc : %08x\n",(unsigned int)((void***)ptr)[i][j]);
			}
		}
		printf("dumping ptr:  %08x\n",ptr);
		dump_small(ptr,10);
		perform_gc(arena);
		perform_gc(arena);
//		perform_gc(arena);
	}
	/*  */
	return 0;
}
	
