#include <stdlib.h>
#include "queue.h"

struct mega_bdescr{
	SLIST_ENTRY(mega_bdescr) link;
	unsigned int nblocks;
};

enum e_descr_type {
	E_BLOCK_SINGLE = 0x0b,
	E_BLOCK_BIG = 0x0c,
};

struct bdescr{
	union{
		SLIST_ENTRY(bdescr) list;
		STAILQ_ENTRY(bdescr) tailq;
	}link;
	enum e_descr_type type;
};

struct big_bdescr{
	struct bdescr bdescr;
	unsigned int nblocks;
	unsigned int size;
	unsigned int nptrs;
	unsigned char used;
};

struct single_bdescr{
	struct bdescr bdescr;
	unsigned int cur_words;
};

struct s_arena{
	SLIST_HEAD( arena_mega_bdescr1  , mega_bdescr)   mega_blocks;
	SLIST_HEAD( arena_single_bdescr1, bdescr) blocks;
	SLIST_HEAD( arena_single_bdescr2, bdescr) free_blocks;
	SLIST_HEAD( arena_big_bdescr1   , bdescr) big_blocks;
	void* root;
	void* stable_ptrs;
};

extern struct s_arena* new_arena();

extern struct single_bdescr* new_single_block(struct s_arena* arena);

extern struct big_bdescr* new_big_blocks(struct s_arena* arena, unsigned int count);


