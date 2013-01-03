#include <stdlib.h>
#include "queue.h"

struct mega_bdescr{
	SLIST_ENTRY(mega_bdescr) link;
	unsigned int nblocks;
};

struct big_bdescr{
	SLIST_ENTRY(big_bdescr) link;
	unsigned int nblocks;
	unsigned int nptrs;
};

struct single_bdescr{
	SLIST_ENTRY(single_bdescr) link;
};

struct s_arena{
	SLIST_HEAD( arena_single_bdescr1, single_bdescr) blocks;
	SLIST_HEAD( arena_single_bdescr2, single_bdescr) free_blocks;
	SLIST_HEAD( arena_mega_bdescr1  , mega_bdescr)   mega_blocks;
	SLIST_HEAD( arena_big_bdescr1   , big_bdescr)    big_blocks;
};

extern struct s_arena* new_arena();

extern struct single_bdescr* new_single_block(struct s_arena* arena);

extern struct big_bdescr* new_big_blocks(struct s_arena* arena, unsigned int count, unsigned int nptrs);


