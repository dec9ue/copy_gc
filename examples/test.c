char jhc_c_compile[] = "gcc /tmp/jhc_9Q4xbw/rts/profile.c /tmp/jhc_9Q4xbw/rts/rts_support.c /tmp/jhc_9Q4xbw/rts/gc_none.c /tmp/jhc_9Q4xbw/rts/jhc_rts.c /tmp/jhc_9Q4xbw/lib/lib_cbits.c /tmp/jhc_9Q4xbw/rts/gc_jgc.c /tmp/jhc_9Q4xbw/rts/stableptr.c -I/tmp/jhc_9Q4xbw/cbits -I/tmp/jhc_9Q4xbw test.c -o test.c '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -DNDEBUG -O3 '-D_JHC_GC=_JHC_GC_JGC'";
char jhc_command[] = "jhc -C test.hs -o test.c";
char jhc_version[] = "jhc 0.8.1 (-0)";

#include "jhc_rts_header.h"
static struct s_cache *cCJhc_Prim_Prim_$x3a;
static struct s_cache *cFtheMain$d6;
static struct s_cache *cP1__theMain$d5;
static struct s_cache *cP1__theMain$d4;
static struct s_cache *cP1__theMain$d3;
static struct s_cache *cP1__theMain$d2;
static struct s_cache *cCJhc_Type_Word_Int;
static struct s_cache *cFW$__fJhc_Enum_39__f;
static struct s_cache *cFJhc_List_filter$d2;
static struct s_cache *cFJhc_Show_shows;
static struct s_cache *cFW$__fPrelude_Text_showLitChar$d2;
static struct s_cache *cFW$__fPrelude_Text_showLitChar$d3;
static struct s_cache *cFW$__fPrelude_Text_showLitChar$d4;
static struct s_cache *cFR$__fJhc_Basics_$pp;
static struct s_cache *cFR$__fJhc_Show_11__showl;
static struct s_cache *cFPrelude_Text_30__showl;
static struct s_cache *cFW$__fJhc_Inst_Show_showWord;
#include <stdio.h>

enum {
    CJhc_Prim_Prim_$BE = 1,
    CJhc_Prim_Prim_$LR = 0,
    CJhc_Prim_Prim_$x3a = 0,
    CJhc_Type_Basic_Char = 0,
    CJhc_Type_Word_Int = 0,
    P1__theMain$d2 = 0,
    P1__theMain$d3 = 1,
    P1__theMain$d4 = 2,
    P1__theMain$d5 = 3,
    TJhc_Prim_Prim_$BE = 4,
    TJhc_Type_Basic_Char = 5,
    TJhc_Type_Word_Int = 6
};
struct sCJhc_Prim_Prim_$x3a A_ALIGNED;
struct sCJhc_Type_Word_Int A_ALIGNED;
struct sFJhc_List_filter$d2 A_ALIGNED;
struct sFJhc_Show_shows A_ALIGNED;
struct sFPrelude_Text_30__showl A_ALIGNED;
struct sFR$__fJhc_Basics_$pp A_ALIGNED;
struct sFR$__fJhc_Show_11__showl A_ALIGNED;
struct sFW$__fJhc_Enum_39__f A_ALIGNED;
struct sFW$__fJhc_Inst_Show_showWord A_ALIGNED;
struct sFW$__fPrelude_Text_showLitChar$d2 A_ALIGNED;
struct sFW$__fPrelude_Text_showLitChar$d3 A_ALIGNED;
struct sFW$__fPrelude_Text_showLitChar$d4 A_ALIGNED;
struct sFtheMain$d6 A_ALIGNED;
struct sFtheMain$d7 A_ALIGNED;
struct sFtheMain$d8 A_ALIGNED;
struct sP1__theMain$d2 A_ALIGNED;
struct sP1__theMain$d3 A_ALIGNED;
struct sP1__theMain$d4 A_ALIGNED;
struct sP1__theMain$d5 A_ALIGNED;
struct sTJhc_Prim_Prim_$BE A_ALIGNED;

struct sCJhc_Prim_Prim_$x3a {
    sptr_t a1;
    sptr_t a2;
};

struct sCJhc_Type_Word_Int {
    uint32_t a1;
};

struct sFJhc_List_filter$d2 {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
};

struct sFJhc_Show_shows {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFPrelude_Text_30__showl {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFR$__fJhc_Basics_$pp {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFR$__fJhc_Show_11__showl {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFW$__fJhc_Enum_39__f {
    fptr_t head;
    uint32_t a1;
};

struct sFW$__fJhc_Inst_Show_showWord {
    fptr_t head;
    sptr_t a2;
    uint32_t a1;
};

struct sFW$__fPrelude_Text_showLitChar$d2 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fPrelude_Text_showLitChar$d3 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fPrelude_Text_showLitChar$d4 {
    fptr_t head;
    uint32_t a1;
};

struct sFtheMain$d6 {
    fptr_t head;
    sptr_t a1;
    wptr_t a2;
};

struct sFtheMain$d7 {
    fptr_t head;
};

struct sFtheMain$d8 {
    fptr_t head;
};

struct sP1__theMain$d2 {
    what_t what;
    sptr_t a1;
};

struct sP1__theMain$d3 {
    what_t what;
    sptr_t a1;
};

struct sP1__theMain$d4 {
    what_t what;
    sptr_t a1;
};

struct sP1__theMain$d5 {
    what_t what;
    sptr_t a1;
};

struct sTJhc_Prim_Prim_$BE {
    what_t what;
    wptr_t a1;
};
void jhc_hs_init(void) ;
static wptr_t E__fJhc_List_filter$d2(gc_t gc,struct sFJhc_List_filter$d2* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Show_shows(gc_t gc,struct sFJhc_Show_shows* arg) A_STD A_FALIGNED;
static wptr_t E__fPrelude_Text_30__showl(gc_t gc,struct sFPrelude_Text_30__showl* arg) A_STD A_FALIGNED;
static wptr_t E__fR$__fJhc_Basics_$pp(gc_t gc,struct sFR$__fJhc_Basics_$pp* arg) A_STD A_FALIGNED;
static wptr_t E__fR$__fJhc_Show_11__showl(gc_t gc,struct sFR$__fJhc_Show_11__showl* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fJhc_Enum_39__f(gc_t gc,struct sFW$__fJhc_Enum_39__f* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fJhc_Inst_Show_showWord(gc_t gc,struct sFW$__fJhc_Inst_Show_showWord* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fPrelude_Text_showLitChar$d2(gc_t gc,struct sFW$__fPrelude_Text_showLitChar$d2* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fPrelude_Text_showLitChar$d3(gc_t gc,struct sFW$__fPrelude_Text_showLitChar$d3* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fPrelude_Text_showLitChar$d4(gc_t gc,struct sFW$__fPrelude_Text_showLitChar$d4* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d6(gc_t gc,struct sFtheMain$d6* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d7(gc_t gc,struct sFtheMain$d7* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d8(gc_t gc,struct sFtheMain$d8* arg) A_STD A_FALIGNED;
void _amain(void) ;
static wptr_t bRfR$__fMain_quicksort(gc_t gc,wptr_t v77367041) A_STD A_MALLOC;
static void b__main(gc_t gc) A_STD;
static wptr_t bapply__12969(gc_t gc,wptr_t v1,sptr_t v2) A_STD A_MALLOC;
static wptr_t fInstance$__iJhc_Show_showList_default(gc_t gc,sptr_t v374,sptr_t v206123618) A_STD A_MALLOC;
static wptr_t fInstance$__iJhc_Show_show_default(gc_t gc,wptr_t v1206131225,sptr_t v1207704091) A_STD A_MALLOC;
static wptr_t fJhc_Basics_$pp(gc_t gc,wptr_t v187684556,sptr_t v161999926) A_STD A_MALLOC;
static wptr_t fJhc_List_filter(gc_t gc,wptr_t v376,sptr_t v62) A_STD A_MALLOC;
static wptr_t fJhc_List_filter$d2(gc_t gc,wptr_t v142055662,sptr_t v157367864) A_STD A_MALLOC;
static wptr_t fJhc_Show_showString(gc_t gc,wptr_t v146554548,sptr_t v261071130) A_STD A_MALLOC;
static wptr_t fJhc_Show_shows(gc_t gc,sptr_t v77260792,sptr_t v206123614) A_STD A_MALLOC;
static wptr_t fJhc_Show_showsPrec(gc_t gc,wptr_t v1464211995,wptr_t v97079480,sptr_t v125289868,sptr_t v194599746) A_STD A_MALLOC;
static wptr_t fJhc_Show_showsPrec$d2(gc_t gc,uint32_t v206123622,sptr_t v90806938) A_STD A_MALLOC;
static wptr_t fPrelude_Text_30__showl(gc_t gc,sptr_t v284,sptr_t v27441726) A_STD A_MALLOC;
static wptr_t fR$__fJhc_Basics_$pp(gc_t gc,sptr_t v101379726,sptr_t v2401354) A_STD A_MALLOC;
static wptr_t fR$__fJhc_Show_11__showl(gc_t gc,sptr_t v69007232,sptr_t v201964564) A_STD A_MALLOC;
static wptr_t fR$__fMain_quicksort(gc_t gc,wptr_t v77366866) A_STD A_MALLOC;
static wptr_t fW$__fJhc_Enum_39__f(gc_t gc,uint32_t v108606840) A_STD A_MALLOC;
static wptr_t fW$__fJhc_Inst_Show_showWord(gc_t gc,uint32_t v1619271219,sptr_t v1622548013) A_STD A_MALLOC;
static wptr_t fW$__fPrelude_Text_showLitChar(gc_t gc,uint32_t v889454615,sptr_t v263598668) A_STD A_MALLOC;
static wptr_t fW$__fPrelude_Text_showLitChar$d2(gc_t gc,sptr_t v117006190) A_STD A_MALLOC;
static wptr_t fW$__fPrelude_Text_showLitChar$d3(gc_t gc,sptr_t v224064300) A_STD A_MALLOC;
static wptr_t fW$__fPrelude_Text_showLitChar$d4(gc_t gc,uint32_t v187669880) A_STD A_MALLOC;
static wptr_t fW$__fR$__fJhc_Basics_136__f(gc_t gc,uint32_t v23898648,wptr_t v46435056) A_STD A_MALLOC;
static wptr_t fW$__fR$__fJhc_List_243__sub(gc_t gc,wptr_t v108606838,uint32_t v127020196) A_STD A_MALLOC;
static void ftheMain(gc_t gc) A_STD;
static uint16_t ftheMain$d2(gc_t gc,sptr_t v177396240,uint32_t v326377505) A_STD;
static wptr_t ftheMain$d3(gc_t gc,sptr_t v346562589,sptr_t v219985668) A_STD A_MALLOC;
static uint16_t ftheMain$d4(gc_t gc,sptr_t v157435254,uint32_t v328474657) A_STD;
static wptr_t ftheMain$d5(gc_t gc,sptr_t v344596511,sptr_t v177396242) A_STD A_MALLOC;
static wptr_t ftheMain$d6(gc_t gc,sptr_t v233944134,wptr_t v262320664) A_STD A_MALLOC;
static wptr_t ftheMain$d7(gc_t gc) A_STD A_MALLOC;
static wptr_t ftheMain$d8(gc_t gc) A_STD A_MALLOC;
struct tup1 {
    sptr_t t0;
    sptr_t t1;
};
/* CAFS */
/* v-1005854741 = (FtheMain$8)*/
static node_t _g1005854741 = { .head = TO_FPTR(&E__ftheMain$d8) };
#define g1005854741 (MKLAZY_C(&_g1005854741))

/* v-1007165461 = (FtheMain$7)*/
static node_t _g1007165461 = { .head = TO_FPTR(&E__ftheMain$d7) };
#define g1007165461 (MKLAZY_C(&_g1007165461))

/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 34),Left &("CJhc.Prim.Prim.[]")],130) */
static const struct sCJhc_Prim_Prim_$x3a _c130 = {.a1 = (sptr_t)RAW_SET_UF('"'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c130 (TO_SPTR_C(P_WHNF, (sptr_t)&_c130))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 38),Left &("CJhc.Prim.Prim.[]")],1) */
static const struct sCJhc_Prim_Prim_$x3a _c1 = {.a1 = (sptr_t)RAW_SET_UF('&'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c1 (TO_SPTR_C(P_WHNF, (sptr_t)&_c1))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 49),Left &("CJhc.Prim.Prim.[]")],40) */
static const struct sCJhc_Prim_Prim_$x3a _c40 = {.a1 = (sptr_t)RAW_SET_UF('1'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c40 (TO_SPTR_C(P_WHNF, (sptr_t)&_c40))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 50),Left &("CJhc.Prim.Prim.[]")],43) */
static const struct sCJhc_Prim_Prim_$x3a _c43 = {.a1 = (sptr_t)RAW_SET_UF('2'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c43 (TO_SPTR_C(P_WHNF, (sptr_t)&_c43))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 51),Left &("CJhc.Prim.Prim.[]")],46) */
static const struct sCJhc_Prim_Prim_$x3a _c46 = {.a1 = (sptr_t)RAW_SET_UF('3'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c46 (TO_SPTR_C(P_WHNF, (sptr_t)&_c46))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 52),Left &("CJhc.Prim.Prim.[]")],49) */
static const struct sCJhc_Prim_Prim_$x3a _c49 = {.a1 = (sptr_t)RAW_SET_UF('4'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c49 (TO_SPTR_C(P_WHNF, (sptr_t)&_c49))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 75),Left &("CJhc.Prim.Prim.[]")],19) */
static const struct sCJhc_Prim_Prim_$x3a _c19 = {.a1 = (sptr_t)RAW_SET_UF('K'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c19 (TO_SPTR_C(P_WHNF, (sptr_t)&_c19))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 65),Right 19],52) */
static const struct sCJhc_Prim_Prim_$x3a _c52 = {.a1 = (sptr_t)RAW_SET_UF('A'), .a2 = c19};
#define c52 (TO_SPTR_C(P_WHNF, (sptr_t)&_c52))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 19],20) */
static const struct sCJhc_Prim_Prim_$x3a _c20 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c19};
#define c20 (TO_SPTR_C(P_WHNF, (sptr_t)&_c20))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 65),Right 20],21) */
static const struct sCJhc_Prim_Prim_$x3a _c21 = {.a1 = (sptr_t)RAW_SET_UF('A'), .a2 = c20};
#define c21 (TO_SPTR_C(P_WHNF, (sptr_t)&_c21))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 78),Left &("CJhc.Prim.Prim.[]")],54) */
static const struct sCJhc_Prim_Prim_$x3a _c54 = {.a1 = (sptr_t)RAW_SET_UF('N'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c54 (TO_SPTR_C(P_WHNF, (sptr_t)&_c54))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 65),Right 54],60) */
static const struct sCJhc_Prim_Prim_$x3a _c60 = {.a1 = (sptr_t)RAW_SET_UF('A'), .a2 = c54};
#define c60 (TO_SPTR_C(P_WHNF, (sptr_t)&_c60))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 66),Left &("CJhc.Prim.Prim.[]")],57) */
static const struct sCJhc_Prim_Prim_$x3a _c57 = {.a1 = (sptr_t)RAW_SET_UF('B'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c57 (TO_SPTR_C(P_WHNF, (sptr_t)&_c57))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 76),Left &("CJhc.Prim.Prim.[]")],3) */
static const struct sCJhc_Prim_Prim_$x3a _c3 = {.a1 = (sptr_t)RAW_SET_UF('L'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c3 (TO_SPTR_C(P_WHNF, (sptr_t)&_c3))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 3],22) */
static const struct sCJhc_Prim_Prim_$x3a _c22 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c3};
#define c22 (TO_SPTR_C(P_WHNF, (sptr_t)&_c22))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 66),Right 22],23) */
static const struct sCJhc_Prim_Prim_$x3a _c23 = {.a1 = (sptr_t)RAW_SET_UF('B'), .a2 = c22};
#define c23 (TO_SPTR_C(P_WHNF, (sptr_t)&_c23))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Left &("CJhc.Prim.Prim.[]")],24) */
static const struct sCJhc_Prim_Prim_$x3a _c24 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c24 (TO_SPTR_C(P_WHNF, (sptr_t)&_c24))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 66),Right 24],25) */
static const struct sCJhc_Prim_Prim_$x3a _c25 = {.a1 = (sptr_t)RAW_SET_UF('B'), .a2 = c24};
#define c25 (TO_SPTR_C(P_WHNF, (sptr_t)&_c25))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Left &("CJhc.Prim.Prim.[]")],66) */
static const struct sCJhc_Prim_Prim_$x3a _c66 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c66 (TO_SPTR_C(P_WHNF, (sptr_t)&_c66))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 82),Left &("CJhc.Prim.Prim.[]")],31) */
static const struct sCJhc_Prim_Prim_$x3a _c31 = {.a1 = (sptr_t)RAW_SET_UF('R'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c31 (TO_SPTR_C(P_WHNF, (sptr_t)&_c31))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 31],32) */
static const struct sCJhc_Prim_Prim_$x3a _c32 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c31};
#define c32 (TO_SPTR_C(P_WHNF, (sptr_t)&_c32))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 40],41) */
static const struct sCJhc_Prim_Prim_$x3a _c41 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c40};
#define c41 (TO_SPTR_C(P_WHNF, (sptr_t)&_c41))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 43],44) */
static const struct sCJhc_Prim_Prim_$x3a _c44 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c43};
#define c44 (TO_SPTR_C(P_WHNF, (sptr_t)&_c44))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 46],47) */
static const struct sCJhc_Prim_Prim_$x3a _c47 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c46};
#define c47 (TO_SPTR_C(P_WHNF, (sptr_t)&_c47))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 49],50) */
static const struct sCJhc_Prim_Prim_$x3a _c50 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c49};
#define c50 (TO_SPTR_C(P_WHNF, (sptr_t)&_c50))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 60],61) */
static const struct sCJhc_Prim_Prim_$x3a _c61 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c60};
#define c61 (TO_SPTR_C(P_WHNF, (sptr_t)&_c61))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 22],110) */
static const struct sCJhc_Prim_Prim_$x3a _c110 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c22};
#define c110 (TO_SPTR_C(P_WHNF, (sptr_t)&_c110))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Left &("CJhc.Prim.Prim.[]")],37) */
static const struct sCJhc_Prim_Prim_$x3a _c37 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c37 (TO_SPTR_C(P_WHNF, (sptr_t)&_c37))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 76),Right 37],38) */
static const struct sCJhc_Prim_Prim_$x3a _c38 = {.a1 = (sptr_t)RAW_SET_UF('L'), .a2 = c37};
#define c38 (TO_SPTR_C(P_WHNF, (sptr_t)&_c38))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 38],39) */
static const struct sCJhc_Prim_Prim_$x3a _c39 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c38};
#define c39 (TO_SPTR_C(P_WHNF, (sptr_t)&_c39))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 41],42) */
static const struct sCJhc_Prim_Prim_$x3a _c42 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c41};
#define c42 (TO_SPTR_C(P_WHNF, (sptr_t)&_c42))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 44],45) */
static const struct sCJhc_Prim_Prim_$x3a _c45 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c44};
#define c45 (TO_SPTR_C(P_WHNF, (sptr_t)&_c45))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 47],48) */
static const struct sCJhc_Prim_Prim_$x3a _c48 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c47};
#define c48 (TO_SPTR_C(P_WHNF, (sptr_t)&_c48))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 50],51) */
static const struct sCJhc_Prim_Prim_$x3a _c51 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c50};
#define c51 (TO_SPTR_C(P_WHNF, (sptr_t)&_c51))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 88),Left &("CJhc.Prim.Prim.[]")],9) */
static const struct sCJhc_Prim_Prim_$x3a _c9 = {.a1 = (sptr_t)RAW_SET_UF('X'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c9 (TO_SPTR_C(P_WHNF, (sptr_t)&_c9))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 84),Right 9],10) */
static const struct sCJhc_Prim_Prim_$x3a _c10 = {.a1 = (sptr_t)RAW_SET_UF('T'), .a2 = c9};
#define c10 (TO_SPTR_C(P_WHNF, (sptr_t)&_c10))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 10],12) */
static const struct sCJhc_Prim_Prim_$x3a _c12 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c10};
#define c12 (TO_SPTR_C(P_WHNF, (sptr_t)&_c12))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 84),Left &("CJhc.Prim.Prim.[]")],13) */
static const struct sCJhc_Prim_Prim_$x3a _c13 = {.a1 = (sptr_t)RAW_SET_UF('T'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c13 (TO_SPTR_C(P_WHNF, (sptr_t)&_c13))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 79),Right 13],14) */
static const struct sCJhc_Prim_Prim_$x3a _c14 = {.a1 = (sptr_t)RAW_SET_UF('O'), .a2 = c13};
#define c14 (TO_SPTR_C(P_WHNF, (sptr_t)&_c14))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 14],15) */
static const struct sCJhc_Prim_Prim_$x3a _c15 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c14};
#define c15 (TO_SPTR_C(P_WHNF, (sptr_t)&_c15))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 81),Left &("CJhc.Prim.Prim.[]")],16) */
static const struct sCJhc_Prim_Prim_$x3a _c16 = {.a1 = (sptr_t)RAW_SET_UF('Q'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c16 (TO_SPTR_C(P_WHNF, (sptr_t)&_c16))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 78),Right 16],17) */
static const struct sCJhc_Prim_Prim_$x3a _c17 = {.a1 = (sptr_t)RAW_SET_UF('N'), .a2 = c16};
#define c17 (TO_SPTR_C(P_WHNF, (sptr_t)&_c17))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 17],18) */
static const struct sCJhc_Prim_Prim_$x3a _c18 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c17};
#define c18 (TO_SPTR_C(P_WHNF, (sptr_t)&_c18))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 84),Right 57],58) */
static const struct sCJhc_Prim_Prim_$x3a _c58 = {.a1 = (sptr_t)RAW_SET_UF('T'), .a2 = c57};
#define c58 (TO_SPTR_C(P_WHNF, (sptr_t)&_c58))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 58],59) */
static const struct sCJhc_Prim_Prim_$x3a _c59 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c58};
#define c59 (TO_SPTR_C(P_WHNF, (sptr_t)&_c59))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 77),Left &("CJhc.Prim.Prim.[]")],62) */
static const struct sCJhc_Prim_Prim_$x3a _c62 = {.a1 = (sptr_t)RAW_SET_UF('M'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c62 (TO_SPTR_C(P_WHNF, (sptr_t)&_c62))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 62],63) */
static const struct sCJhc_Prim_Prim_$x3a _c63 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c62};
#define c63 (TO_SPTR_C(P_WHNF, (sptr_t)&_c63))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 66],67) */
static const struct sCJhc_Prim_Prim_$x3a _c67 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c66};
#define c67 (TO_SPTR_C(P_WHNF, (sptr_t)&_c67))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 67],68) */
static const struct sCJhc_Prim_Prim_$x3a _c68 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c67};
#define c68 (TO_SPTR_C(P_WHNF, (sptr_t)&_c68))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 70),Left &("CJhc.Prim.Prim.[]")],27) */
static const struct sCJhc_Prim_Prim_$x3a _c27 = {.a1 = (sptr_t)RAW_SET_UF('F'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c27 (TO_SPTR_C(P_WHNF, (sptr_t)&_c27))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 70),Right 24],69) */
static const struct sCJhc_Prim_Prim_$x3a _c69 = {.a1 = (sptr_t)RAW_SET_UF('F'), .a2 = c24};
#define c69 (TO_SPTR_C(P_WHNF, (sptr_t)&_c69))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 70),Right 27],30) */
static const struct sCJhc_Prim_Prim_$x3a _c30 = {.a1 = (sptr_t)RAW_SET_UF('F'), .a2 = c27};
#define c30 (TO_SPTR_C(P_WHNF, (sptr_t)&_c30))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 71),Right 24],70) */
static const struct sCJhc_Prim_Prim_$x3a _c70 = {.a1 = (sptr_t)RAW_SET_UF('G'), .a2 = c24};
#define c70 (TO_SPTR_C(P_WHNF, (sptr_t)&_c70))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 72),Left &("CJhc.Prim.Prim.[]")],6) */
static const struct sCJhc_Prim_Prim_$x3a _c6 = {.a1 = (sptr_t)RAW_SET_UF('H'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c6 (TO_SPTR_C(P_WHNF, (sptr_t)&_c6))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 72),Right 13],26) */
static const struct sCJhc_Prim_Prim_$x3a _c26 = {.a1 = (sptr_t)RAW_SET_UF('H'), .a2 = c13};
#define c26 (TO_SPTR_C(P_WHNF, (sptr_t)&_c26))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 73),Left &("CJhc.Prim.Prim.[]")],35) */
static const struct sCJhc_Prim_Prim_$x3a _c35 = {.a1 = (sptr_t)RAW_SET_UF('I'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c35 (TO_SPTR_C(P_WHNF, (sptr_t)&_c35))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 76),Right 27],28) */
static const struct sCJhc_Prim_Prim_$x3a _c28 = {.a1 = (sptr_t)RAW_SET_UF('L'), .a2 = c27};
#define c28 (TO_SPTR_C(P_WHNF, (sptr_t)&_c28))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 85),Right 3],4) */
static const struct sCJhc_Prim_Prim_$x3a _c4 = {.a1 = (sptr_t)RAW_SET_UF('U'), .a2 = c3};
#define c4 (TO_SPTR_C(P_WHNF, (sptr_t)&_c4))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 78),Right 4],5) */
static const struct sCJhc_Prim_Prim_$x3a _c5 = {.a1 = (sptr_t)RAW_SET_UF('N'), .a2 = c4};
#define c5 (TO_SPTR_C(P_WHNF, (sptr_t)&_c5))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 78),Right 52],53) */
static const struct sCJhc_Prim_Prim_$x3a _c53 = {.a1 = (sptr_t)RAW_SET_UF('N'), .a2 = c52};
#define c53 (TO_SPTR_C(P_WHNF, (sptr_t)&_c53))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 79),Left &("CJhc.Prim.Prim.[]")],33) */
static const struct sCJhc_Prim_Prim_$x3a _c33 = {.a1 = (sptr_t)RAW_SET_UF('O'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c33 (TO_SPTR_C(P_WHNF, (sptr_t)&_c33))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 79),Right 6],7) */
static const struct sCJhc_Prim_Prim_$x3a _c7 = {.a1 = (sptr_t)RAW_SET_UF('O'), .a2 = c6};
#define c7 (TO_SPTR_C(P_WHNF, (sptr_t)&_c7))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 80),Left &("CJhc.Prim.Prim.[]")],73) */
static const struct sCJhc_Prim_Prim_$x3a _c73 = {.a1 = (sptr_t)RAW_SET_UF('P'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c73 (TO_SPTR_C(P_WHNF, (sptr_t)&_c73))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 82),Right 24],71) */
static const struct sCJhc_Prim_Prim_$x3a _c71 = {.a1 = (sptr_t)RAW_SET_UF('R'), .a2 = c24};
#define c71 (TO_SPTR_C(P_WHNF, (sptr_t)&_c71))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 7],8) */
static const struct sCJhc_Prim_Prim_$x3a _c8 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c7};
#define c8 (TO_SPTR_C(P_WHNF, (sptr_t)&_c8))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 10],11) */
static const struct sCJhc_Prim_Prim_$x3a _c11 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c10};
#define c11 (TO_SPTR_C(P_WHNF, (sptr_t)&_c11))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 33],34) */
static const struct sCJhc_Prim_Prim_$x3a _c34 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c33};
#define c34 (TO_SPTR_C(P_WHNF, (sptr_t)&_c34))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 35],36) */
static const struct sCJhc_Prim_Prim_$x3a _c36 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c35};
#define c36 (TO_SPTR_C(P_WHNF, (sptr_t)&_c36))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 89),Right 54],55) */
static const struct sCJhc_Prim_Prim_$x3a _c55 = {.a1 = (sptr_t)RAW_SET_UF('Y'), .a2 = c54};
#define c55 (TO_SPTR_C(P_WHNF, (sptr_t)&_c55))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 55],56) */
static const struct sCJhc_Prim_Prim_$x3a _c56 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c55};
#define c56 (TO_SPTR_C(P_WHNF, (sptr_t)&_c56))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 85),Right 57],64) */
static const struct sCJhc_Prim_Prim_$x3a _c64 = {.a1 = (sptr_t)RAW_SET_UF('U'), .a2 = c57};
#define c64 (TO_SPTR_C(P_WHNF, (sptr_t)&_c64))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 64],65) */
static const struct sCJhc_Prim_Prim_$x3a _c65 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c64};
#define c65 (TO_SPTR_C(P_WHNF, (sptr_t)&_c65))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 73],74) */
static const struct sCJhc_Prim_Prim_$x3a _c74 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c73};
#define c74 (TO_SPTR_C(P_WHNF, (sptr_t)&_c74))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 85),Right 24],72) */
static const struct sCJhc_Prim_Prim_$x3a _c72 = {.a1 = (sptr_t)RAW_SET_UF('U'), .a2 = c24};
#define c72 (TO_SPTR_C(P_WHNF, (sptr_t)&_c72))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 86),Right 13],29) */
static const struct sCJhc_Prim_Prim_$x3a _c29 = {.a1 = (sptr_t)RAW_SET_UF('V'), .a2 = c13};
#define c29 (TO_SPTR_C(P_WHNF, (sptr_t)&_c29))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 93),Left &("CJhc.Prim.Prim.[]")],128) */
static const struct sCJhc_Prim_Prim_$x3a _c128 = {.a1 = (sptr_t)RAW_SET_UF(']'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c128 (TO_SPTR_C(P_WHNF, (sptr_t)&_c128))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 91),Right 128],129) */
static const struct sCJhc_Prim_Prim_$x3a _c129 = {.a1 = (sptr_t)RAW_SET_UF('['), .a2 = c128};
#define c129 (TO_SPTR_C(P_WHNF, (sptr_t)&_c129))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Left &("CJhc.Prim.Prim.[]")],108) */
static const struct sCJhc_Prim_Prim_$x3a _c108 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c108 (TO_SPTR_C(P_WHNF, (sptr_t)&_c108))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 1],2) */
static const struct sCJhc_Prim_Prim_$x3a _c2 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c1};
#define c2 (TO_SPTR_C(P_WHNF, (sptr_t)&_c2))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 34],126) */
static const struct sCJhc_Prim_Prim_$x3a _c126 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c34};
#define c126 (TO_SPTR_C(P_WHNF, (sptr_t)&_c126))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 108],109) */
static const struct sCJhc_Prim_Prim_$x3a _c109 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c108};
#define c109 (TO_SPTR_C(P_WHNF, (sptr_t)&_c109))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 110],111) */
static const struct sCJhc_Prim_Prim_$x3a _c111 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c110};
#define c111 (TO_SPTR_C(P_WHNF, (sptr_t)&_c111))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 97),Left &("CJhc.Prim.Prim.[]")],112) */
static const struct sCJhc_Prim_Prim_$x3a _c112 = {.a1 = (sptr_t)RAW_SET_UF('a'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c112 (TO_SPTR_C(P_WHNF, (sptr_t)&_c112))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 112],113) */
static const struct sCJhc_Prim_Prim_$x3a _c113 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c112};
#define c113 (TO_SPTR_C(P_WHNF, (sptr_t)&_c113))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 98),Left &("CJhc.Prim.Prim.[]")],114) */
static const struct sCJhc_Prim_Prim_$x3a _c114 = {.a1 = (sptr_t)RAW_SET_UF('b'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c114 (TO_SPTR_C(P_WHNF, (sptr_t)&_c114))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 114],115) */
static const struct sCJhc_Prim_Prim_$x3a _c115 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c114};
#define c115 (TO_SPTR_C(P_WHNF, (sptr_t)&_c115))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 116),Left &("CJhc.Prim.Prim.[]")],116) */
static const struct sCJhc_Prim_Prim_$x3a _c116 = {.a1 = (sptr_t)RAW_SET_UF('t'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c116 (TO_SPTR_C(P_WHNF, (sptr_t)&_c116))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 116],117) */
static const struct sCJhc_Prim_Prim_$x3a _c117 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c116};
#define c117 (TO_SPTR_C(P_WHNF, (sptr_t)&_c117))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 110),Left &("CJhc.Prim.Prim.[]")],118) */
static const struct sCJhc_Prim_Prim_$x3a _c118 = {.a1 = (sptr_t)RAW_SET_UF('n'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c118 (TO_SPTR_C(P_WHNF, (sptr_t)&_c118))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 118],119) */
static const struct sCJhc_Prim_Prim_$x3a _c119 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c118};
#define c119 (TO_SPTR_C(P_WHNF, (sptr_t)&_c119))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 118),Left &("CJhc.Prim.Prim.[]")],120) */
static const struct sCJhc_Prim_Prim_$x3a _c120 = {.a1 = (sptr_t)RAW_SET_UF('v'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c120 (TO_SPTR_C(P_WHNF, (sptr_t)&_c120))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 120],121) */
static const struct sCJhc_Prim_Prim_$x3a _c121 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c120};
#define c121 (TO_SPTR_C(P_WHNF, (sptr_t)&_c121))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 102),Left &("CJhc.Prim.Prim.[]")],122) */
static const struct sCJhc_Prim_Prim_$x3a _c122 = {.a1 = (sptr_t)RAW_SET_UF('f'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c122 (TO_SPTR_C(P_WHNF, (sptr_t)&_c122))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 122],123) */
static const struct sCJhc_Prim_Prim_$x3a _c123 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c122};
#define c123 (TO_SPTR_C(P_WHNF, (sptr_t)&_c123))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 114),Left &("CJhc.Prim.Prim.[]")],124) */
static const struct sCJhc_Prim_Prim_$x3a _c124 = {.a1 = (sptr_t)RAW_SET_UF('r'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c124 (TO_SPTR_C(P_WHNF, (sptr_t)&_c124))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 124],125) */
static const struct sCJhc_Prim_Prim_$x3a _c125 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c124};
#define c125 (TO_SPTR_C(P_WHNF, (sptr_t)&_c125))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 130],131) */
static const struct sCJhc_Prim_Prim_$x3a _c131 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c130};
#define c131 (TO_SPTR_C(P_WHNF, (sptr_t)&_c131))
/* (HcNode CJhc.Prim.Prim.: [Right 74,Left &("CJhc.Prim.Prim.[]")],75) */
static const struct sCJhc_Prim_Prim_$x3a _c75 = {.a1 = c74, .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c75 (TO_SPTR_C(P_WHNF, (sptr_t)&_c75))
/* (HcNode CJhc.Prim.Prim.: [Right 72,Right 75],76) */
static const struct sCJhc_Prim_Prim_$x3a _c76 = {.a1 = c72, .a2 = c75};
#define c76 (TO_SPTR_C(P_WHNF, (sptr_t)&_c76))
/* (HcNode CJhc.Prim.Prim.: [Right 71,Right 76],77) */
static const struct sCJhc_Prim_Prim_$x3a _c77 = {.a1 = c71, .a2 = c76};
#define c77 (TO_SPTR_C(P_WHNF, (sptr_t)&_c77))
/* (HcNode CJhc.Prim.Prim.: [Right 70,Right 77],78) */
static const struct sCJhc_Prim_Prim_$x3a _c78 = {.a1 = c70, .a2 = c77};
#define c78 (TO_SPTR_C(P_WHNF, (sptr_t)&_c78))
/* (HcNode CJhc.Prim.Prim.: [Right 69,Right 78],79) */
static const struct sCJhc_Prim_Prim_$x3a _c79 = {.a1 = c69, .a2 = c78};
#define c79 (TO_SPTR_C(P_WHNF, (sptr_t)&_c79))
/* (HcNode CJhc.Prim.Prim.: [Right 68,Right 79],80) */
static const struct sCJhc_Prim_Prim_$x3a _c80 = {.a1 = c68, .a2 = c79};
#define c80 (TO_SPTR_C(P_WHNF, (sptr_t)&_c80))
/* (HcNode CJhc.Prim.Prim.: [Right 65,Right 80],81) */
static const struct sCJhc_Prim_Prim_$x3a _c81 = {.a1 = c65, .a2 = c80};
#define c81 (TO_SPTR_C(P_WHNF, (sptr_t)&_c81))
/* (HcNode CJhc.Prim.Prim.: [Right 63,Right 81],82) */
static const struct sCJhc_Prim_Prim_$x3a _c82 = {.a1 = c63, .a2 = c81};
#define c82 (TO_SPTR_C(P_WHNF, (sptr_t)&_c82))
/* (HcNode CJhc.Prim.Prim.: [Right 61,Right 82],83) */
static const struct sCJhc_Prim_Prim_$x3a _c83 = {.a1 = c61, .a2 = c82};
#define c83 (TO_SPTR_C(P_WHNF, (sptr_t)&_c83))
/* (HcNode CJhc.Prim.Prim.: [Right 59,Right 83],84) */
static const struct sCJhc_Prim_Prim_$x3a _c84 = {.a1 = c59, .a2 = c83};
#define c84 (TO_SPTR_C(P_WHNF, (sptr_t)&_c84))
/* (HcNode CJhc.Prim.Prim.: [Right 56,Right 84],85) */
static const struct sCJhc_Prim_Prim_$x3a _c85 = {.a1 = c56, .a2 = c84};
#define c85 (TO_SPTR_C(P_WHNF, (sptr_t)&_c85))
/* (HcNode CJhc.Prim.Prim.: [Right 53,Right 85],86) */
static const struct sCJhc_Prim_Prim_$x3a _c86 = {.a1 = c53, .a2 = c85};
#define c86 (TO_SPTR_C(P_WHNF, (sptr_t)&_c86))
/* (HcNode CJhc.Prim.Prim.: [Right 51,Right 86],87) */
static const struct sCJhc_Prim_Prim_$x3a _c87 = {.a1 = c51, .a2 = c86};
#define c87 (TO_SPTR_C(P_WHNF, (sptr_t)&_c87))
/* (HcNode CJhc.Prim.Prim.: [Right 48,Right 87],88) */
static const struct sCJhc_Prim_Prim_$x3a _c88 = {.a1 = c48, .a2 = c87};
#define c88 (TO_SPTR_C(P_WHNF, (sptr_t)&_c88))
/* (HcNode CJhc.Prim.Prim.: [Right 45,Right 88],89) */
static const struct sCJhc_Prim_Prim_$x3a _c89 = {.a1 = c45, .a2 = c88};
#define c89 (TO_SPTR_C(P_WHNF, (sptr_t)&_c89))
/* (HcNode CJhc.Prim.Prim.: [Right 42,Right 89],90) */
static const struct sCJhc_Prim_Prim_$x3a _c90 = {.a1 = c42, .a2 = c89};
#define c90 (TO_SPTR_C(P_WHNF, (sptr_t)&_c90))
/* (HcNode CJhc.Prim.Prim.: [Right 39,Right 90],91) */
static const struct sCJhc_Prim_Prim_$x3a _c91 = {.a1 = c39, .a2 = c90};
#define c91 (TO_SPTR_C(P_WHNF, (sptr_t)&_c91))
/* (HcNode CJhc.Prim.Prim.: [Right 36,Right 91],92) */
static const struct sCJhc_Prim_Prim_$x3a _c92 = {.a1 = c36, .a2 = c91};
#define c92 (TO_SPTR_C(P_WHNF, (sptr_t)&_c92))
/* (HcNode CJhc.Prim.Prim.: [Right 34,Right 92],93) */
static const struct sCJhc_Prim_Prim_$x3a _c93 = {.a1 = c34, .a2 = c92};
#define c93 (TO_SPTR_C(P_WHNF, (sptr_t)&_c93))
/* (HcNode CJhc.Prim.Prim.: [Right 32,Right 93],94) */
static const struct sCJhc_Prim_Prim_$x3a _c94 = {.a1 = c32, .a2 = c93};
#define c94 (TO_SPTR_C(P_WHNF, (sptr_t)&_c94))
/* (HcNode CJhc.Prim.Prim.: [Right 30,Right 94],95) */
static const struct sCJhc_Prim_Prim_$x3a _c95 = {.a1 = c30, .a2 = c94};
#define c95 (TO_SPTR_C(P_WHNF, (sptr_t)&_c95))
/* (HcNode CJhc.Prim.Prim.: [Right 29,Right 95],96) */
static const struct sCJhc_Prim_Prim_$x3a _c96 = {.a1 = c29, .a2 = c95};
#define c96 (TO_SPTR_C(P_WHNF, (sptr_t)&_c96))
/* (HcNode CJhc.Prim.Prim.: [Right 28,Right 96],97) */
static const struct sCJhc_Prim_Prim_$x3a _c97 = {.a1 = c28, .a2 = c96};
#define c97 (TO_SPTR_C(P_WHNF, (sptr_t)&_c97))
/* (HcNode CJhc.Prim.Prim.: [Right 26,Right 97],98) */
static const struct sCJhc_Prim_Prim_$x3a _c98 = {.a1 = c26, .a2 = c97};
#define c98 (TO_SPTR_C(P_WHNF, (sptr_t)&_c98))
/* (HcNode CJhc.Prim.Prim.: [Right 25,Right 98],99) */
static const struct sCJhc_Prim_Prim_$x3a _c99 = {.a1 = c25, .a2 = c98};
#define c99 (TO_SPTR_C(P_WHNF, (sptr_t)&_c99))
/* (HcNode CJhc.Prim.Prim.: [Right 23,Right 99],100) */
static const struct sCJhc_Prim_Prim_$x3a _c100 = {.a1 = c23, .a2 = c99};
#define c100 (TO_SPTR_C(P_WHNF, (sptr_t)&_c100))
/* (HcNode CJhc.Prim.Prim.: [Right 21,Right 100],101) */
static const struct sCJhc_Prim_Prim_$x3a _c101 = {.a1 = c21, .a2 = c100};
#define c101 (TO_SPTR_C(P_WHNF, (sptr_t)&_c101))
/* (HcNode CJhc.Prim.Prim.: [Right 18,Right 101],102) */
static const struct sCJhc_Prim_Prim_$x3a _c102 = {.a1 = c18, .a2 = c101};
#define c102 (TO_SPTR_C(P_WHNF, (sptr_t)&_c102))
/* (HcNode CJhc.Prim.Prim.: [Right 15,Right 102],103) */
static const struct sCJhc_Prim_Prim_$x3a _c103 = {.a1 = c15, .a2 = c102};
#define c103 (TO_SPTR_C(P_WHNF, (sptr_t)&_c103))
/* (HcNode CJhc.Prim.Prim.: [Right 12,Right 103],104) */
static const struct sCJhc_Prim_Prim_$x3a _c104 = {.a1 = c12, .a2 = c103};
#define c104 (TO_SPTR_C(P_WHNF, (sptr_t)&_c104))
/* (HcNode CJhc.Prim.Prim.: [Right 11,Right 104],105) */
static const struct sCJhc_Prim_Prim_$x3a _c105 = {.a1 = c11, .a2 = c104};
#define c105 (TO_SPTR_C(P_WHNF, (sptr_t)&_c105))
/* (HcNode CJhc.Prim.Prim.: [Right 8,Right 105],106) */
static const struct sCJhc_Prim_Prim_$x3a _c106 = {.a1 = c8, .a2 = c105};
#define c106 (TO_SPTR_C(P_WHNF, (sptr_t)&_c106))
/* (HcNode CJhc.Prim.Prim.: [Right 5,Right 106],107) */
static const struct sCJhc_Prim_Prim_$x3a _c107 = {.a1 = c5, .a2 = c106};
#define c107 (TO_SPTR_C(P_WHNF, (sptr_t)&_c107))
/* (HcNode CJhc.Type.Word.Int [Left 0],127) */
static const struct sCJhc_Type_Word_Int _c127 = {.a1 = 0};
#define c127 (TO_SPTR_C(P_WHNF, (sptr_t)&_c127))
/* (HcNode TJhc.Prim.Prim.[] [Left ("TJhc.Type.Word.Int")],133) */
static const struct sTJhc_Prim_Prim_$BE _c133 = {.what = (what_t)SET_RAW_TAG(TJhc_Prim_Prim_$BE), .a1 = SET_RAW_TAG(TJhc_Type_Word_Int)};
#define c133 (TO_SPTR_C(P_WHNF, (sptr_t)&_c133))
/* (HcNode TJhc.Prim.Prim.[] [Left ("TJhc.Type.Basic.Char")],132) */
static const struct sTJhc_Prim_Prim_$BE _c132 = {.what = (what_t)SET_RAW_TAG(TJhc_Prim_Prim_$BE), .a1 = SET_RAW_TAG(TJhc_Type_Basic_Char)};
#define c132 (TO_SPTR_C(P_WHNF, (sptr_t)&_c132))

const void * const nh_stuff[] = {
&_g1005854741, &_g1007165461, &_c1, &_c2, &_c3, &_c4, &_c5, &_c6,
&_c7, &_c8, &_c9, &_c10, &_c11, &_c12, &_c13, &_c14, &_c15, &_c16,
&_c17, &_c18, &_c19, &_c20, &_c21, &_c22, &_c23, &_c24, &_c25,
&_c26, &_c27, &_c28, &_c29, &_c30, &_c31, &_c32, &_c33, &_c34,
&_c35, &_c36, &_c37, &_c38, &_c39, &_c40, &_c41, &_c42, &_c43,
&_c44, &_c45, &_c46, &_c47, &_c48, &_c49, &_c50, &_c51, &_c52,
&_c53, &_c54, &_c55, &_c56, &_c57, &_c58, &_c59, &_c60, &_c61,
&_c62, &_c63, &_c64, &_c65, &_c66, &_c67, &_c68, &_c69, &_c70,
&_c71, &_c72, &_c73, &_c74, &_c75, &_c76, &_c77, &_c78, &_c79,
&_c80, &_c81, &_c82, &_c83, &_c84, &_c85, &_c86, &_c87, &_c88,
&_c89, &_c90, &_c91, &_c92, &_c93, &_c94, &_c95, &_c96, &_c97,
&_c98, &_c99, &_c100, &_c101, &_c102, &_c103, &_c104, &_c105,
&_c106, &_c107, &_c108, &_c109, &_c110, &_c111, &_c112, &_c113,
&_c114, &_c115, &_c116, &_c117, &_c118, &_c119, &_c120, &_c121,
&_c122, &_c123, &_c124, &_c125, &_c126, &_c127, &_c128, &_c129,
&_c130, &_c131, &_c132, &_c133, NULL
};


void 
jhc_hs_init(void)
{
        find_cache(&cCJhc_Prim_Prim_$x3a,arena,TO_BLOCKS(sizeof(struct sCJhc_Prim_Prim_$x3a)),2);
        find_cache(&cFtheMain$d6,arena,TO_BLOCKS(sizeof(struct sFtheMain$d6)),3);
        find_cache(&cP1__theMain$d5,arena,TO_BLOCKS(sizeof(struct sP1__theMain$d5)),2);
        find_cache(&cP1__theMain$d4,arena,TO_BLOCKS(sizeof(struct sP1__theMain$d4)),2);
        find_cache(&cP1__theMain$d3,arena,TO_BLOCKS(sizeof(struct sP1__theMain$d3)),2);
        find_cache(&cP1__theMain$d2,arena,TO_BLOCKS(sizeof(struct sP1__theMain$d2)),2);
        find_cache(&cCJhc_Type_Word_Int,arena,TO_BLOCKS(sizeof(struct sCJhc_Type_Word_Int)),0);
        find_cache(&cFW$__fJhc_Enum_39__f,arena,TO_BLOCKS(sizeof(struct sFW$__fJhc_Enum_39__f)),1);
        find_cache(&cFJhc_List_filter$d2,arena,TO_BLOCKS(sizeof(struct sFJhc_List_filter$d2)),3);
        find_cache(&cFJhc_Show_shows,arena,TO_BLOCKS(sizeof(struct sFJhc_Show_shows)),3);
        find_cache(&cFW$__fPrelude_Text_showLitChar$d2,arena,TO_BLOCKS(sizeof(struct sFW$__fPrelude_Text_showLitChar$d2)),2);
        find_cache(&cFW$__fPrelude_Text_showLitChar$d3,arena,TO_BLOCKS(sizeof(struct sFW$__fPrelude_Text_showLitChar$d3)),2);
        find_cache(&cFW$__fPrelude_Text_showLitChar$d4,arena,TO_BLOCKS(sizeof(struct sFW$__fPrelude_Text_showLitChar$d4)),1);
        find_cache(&cFR$__fJhc_Basics_$pp,arena,TO_BLOCKS(sizeof(struct sFR$__fJhc_Basics_$pp)),3);
        find_cache(&cFR$__fJhc_Show_11__showl,arena,TO_BLOCKS(sizeof(struct sFR$__fJhc_Show_11__showl)),3);
        find_cache(&cFPrelude_Text_30__showl,arena,TO_BLOCKS(sizeof(struct sFPrelude_Text_30__showl)),3);
        find_cache(&cFW$__fJhc_Inst_Show_showWord,arena,TO_BLOCKS(sizeof(struct sFW$__fJhc_Inst_Show_showWord)),2);
}

static wptr_t A_STD A_FALIGNED
E__fJhc_List_filter$d2(gc_t gc,struct sFJhc_List_filter$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_List_filter$d2(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Show_shows(gc_t gc,struct sFJhc_Show_shows* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Show_shows(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fPrelude_Text_30__showl(gc_t gc,struct sFPrelude_Text_30__showl* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fPrelude_Text_30__showl(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fR$__fJhc_Basics_$pp(gc_t gc,struct sFR$__fJhc_Basics_$pp* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fR$__fJhc_Basics_$pp(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fR$__fJhc_Show_11__showl(gc_t gc,struct sFR$__fJhc_Show_11__showl* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fR$__fJhc_Show_11__showl(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fJhc_Enum_39__f(gc_t gc,struct sFW$__fJhc_Enum_39__f* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fJhc_Enum_39__f(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fJhc_Inst_Show_showWord(gc_t gc,struct sFW$__fJhc_Inst_Show_showWord* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fJhc_Inst_Show_showWord(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fPrelude_Text_showLitChar$d2(gc_t gc,struct sFW$__fPrelude_Text_showLitChar$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fPrelude_Text_showLitChar$d2(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fPrelude_Text_showLitChar$d3(gc_t gc,struct sFW$__fPrelude_Text_showLitChar$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fPrelude_Text_showLitChar$d3(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fPrelude_Text_showLitChar$d4(gc_t gc,struct sFW$__fPrelude_Text_showLitChar$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fPrelude_Text_showLitChar$d4(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d6(gc_t gc,struct sFtheMain$d6* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d6(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d7(gc_t gc,struct sFtheMain$d7* arg)
{
        wptr_t r;
        r = ftheMain$d7(gc);
        update(arg,r);
        gc_add_root(gc,(sptr_t)r);
        return r;
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d8(gc_t gc,struct sFtheMain$d8* arg)
{
        wptr_t r;
        r = ftheMain$d8(gc);
        update(arg,r);
        gc_add_root(gc,(sptr_t)r);
        return r;
}

void 
_amain(void)
{
        return (void)b__main(saved_gc);
}

static wptr_t A_STD A_MALLOC
bRfR$__fMain_quicksort(gc_t gc,wptr_t v77367041)
{
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v77367041) {
            return v77367041;
        } else {
            sptr_t v264753296;
            sptr_t v69723202;
            /* ("CJhc.Prim.Prim.:" ni264753296 ni69723202) */
            v264753296 = ((struct sCJhc_Prim_Prim_$x3a*)v77367041)->a1;
            v69723202 = ((struct sCJhc_Prim_Prim_$x3a*)v77367041)->a2;
            {   gc_frame0(gc,2,v69723202,v264753296);
                wptr_t x2 = s_alloc(gc,cP1__theMain$d2);
                SET_MEM_TAG((struct sP1__theMain$d2*)x2,P1__theMain$d2);
                ((struct sP1__theMain$d2*)x2)->a1 = v264753296;
                wptr_t v454 = x2;
                sptr_t v93842276 = demote(v454);
                {   wptr_t v100006;
                    wptr_t v100010;
                    gc_frame0(gc,1,v93842276);
                    wptr_t x3 = s_alloc(gc,cP1__theMain$d3);
                    SET_MEM_TAG((struct sP1__theMain$d3*)x3,P1__theMain$d3);
                    ((struct sP1__theMain$d3*)x3)->a1 = v93842276;
                    wptr_t v193 = x3;
                    v100006 = fJhc_List_filter(gc,v193,v69723202);
                    v100010 = bRfR$__fMain_quicksort(gc,v100006);
                    {   gc_frame0(gc,1,v100010);
                        wptr_t x4 = s_alloc(gc,cP1__theMain$d4);
                        SET_MEM_TAG((struct sP1__theMain$d4*)x4,P1__theMain$d4);
                        ((struct sP1__theMain$d4*)x4)->a1 = v264753296;
                        wptr_t v199 = x4;
                        sptr_t v161580888 = demote(v199);
                        {   gc_frame0(gc,1,v161580888);
                            wptr_t x5 = s_alloc(gc,cP1__theMain$d5);
                            SET_MEM_TAG((struct sP1__theMain$d5*)x5,P1__theMain$d5);
                            ((struct sP1__theMain$d5*)x5)->a1 = v161580888;
                            wptr_t v201 = x5;
                            {   gc_frame0(gc,1,v201);
                                sptr_t x6 = s_alloc(gc,cFtheMain$d6);
                                ((struct sFtheMain$d6*)x6)->head = TO_FPTR(&E__ftheMain$d6);
                                ((struct sFtheMain$d6*)x6)->a1 = v69723202;
                                ((struct sFtheMain$d6*)x6)->a2 = v201;
                                sptr_t v250802620 = MKLAZY(x6);
                                {   gc_frame0(gc,1,v250802620);
                                    wptr_t x7 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                    ((struct sCJhc_Prim_Prim_$x3a*)x7)->a1 = v264753296;
                                    ((struct sCJhc_Prim_Prim_$x3a*)x7)->a2 = v250802620;
                                    wptr_t v204 = x7;
                                    sptr_t v244530838 = demote(v204);
                                    return fJhc_Basics_$pp(gc,v100010,v244530838);
                                }
                            }
                        }
                    }
                }
            }
        }
}

static void A_STD
b__main(gc_t gc)
{
        return ftheMain(gc);
}

static wptr_t A_STD A_MALLOC
bapply__12969(gc_t gc,wptr_t v1,sptr_t v2)
{
        if (P1__theMain$d3 == FETCH_TAG(v1)) {
            sptr_t v3;
            v3 = ((struct sP1__theMain$d3*)v1)->a1;
            return ftheMain$d3(gc,v3,v2);
        } else {
            sptr_t v7;
            /* ("P1_theMain$5" ni7) */
            v7 = ((struct sP1__theMain$d5*)v1)->a1;
            return ftheMain$d5(gc,v7,v2);
        }
}

static wptr_t A_STD A_MALLOC
fInstance$__iJhc_Show_showList_default(gc_t gc,sptr_t v374,sptr_t v206123618)
{
        {   gc_frame0(gc,1,v206123618);
            wptr_t v100060 = eval(gc,v374);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100060) {
                return fJhc_Show_showString(gc,PROMOTE(c129),v206123618);
            } else {
                sptr_t v183;
                sptr_t v210;
                /* ("CJhc.Prim.Prim.:" ni210 ni183) */
                v210 = ((struct sCJhc_Prim_Prim_$x3a*)v100060)->a1;
                v183 = ((struct sCJhc_Prim_Prim_$x3a*)v100060)->a2;
                {   gc_frame0(gc,2,v183,v210);
                    sptr_t x32 = s_alloc(gc,cFR$__fJhc_Show_11__showl);
                    ((struct sFR$__fJhc_Show_11__showl*)x32)->head = TO_FPTR(&E__fR$__fJhc_Show_11__showl);
                    ((struct sFR$__fJhc_Show_11__showl*)x32)->a1 = v183;
                    ((struct sFR$__fJhc_Show_11__showl*)x32)->a2 = v206123618;
                    sptr_t v186115454 = MKLAZY(x32);
                    {   gc_frame0(gc,1,v186115454);
                        sptr_t x33 = s_alloc(gc,cFJhc_Show_shows);
                        ((struct sFJhc_Show_shows*)x33)->head = TO_FPTR(&E__fJhc_Show_shows);
                        ((struct sFJhc_Show_shows*)x33)->a1 = v210;
                        ((struct sFJhc_Show_shows*)x33)->a2 = v186115454;
                        sptr_t v187684554 = MKLAZY(x33);
                        {   gc_frame0(gc,1,v187684554);
                            wptr_t x34 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x34)->a1 = ((sptr_t)RAW_SET_UF('['));
                            ((struct sCJhc_Prim_Prim_$x3a*)x34)->a2 = v187684554;
                            return x34;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fInstance$__iJhc_Show_show_default(gc_t gc,wptr_t v1206131225,sptr_t v1207704091)
{
        return fJhc_Show_showsPrec(gc,v1206131225,PROMOTE(c127),v1207704091,(sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
}

static wptr_t A_STD A_MALLOC
fJhc_Basics_$pp(gc_t gc,wptr_t v187684556,sptr_t v161999926)
{
        sptr_t v187684861 = demote(v187684556);
        return fR$__fJhc_Basics_$pp(gc,v187684861,v161999926);
}

static wptr_t A_STD A_MALLOC
fJhc_List_filter(gc_t gc,wptr_t v376,sptr_t v62)
{
        return fJhc_List_filter$d2(gc,v376,v62);
}

static wptr_t A_STD A_MALLOC
fJhc_List_filter$d2(gc_t gc,wptr_t v142055662,sptr_t v157367864)
{
        wptr_t v142055799;
        sptr_t v157368002;
        v142055799 = v142055662;
        v157368002 = v157367864;
        bRfJhc_List_filter$d2u43:;
        {   {   gc_frame0(gc,1,v142055799);
                wptr_t v100028 = eval(gc,v157368002);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100028) {
                    return v100028;
                } else {
                    sptr_t v215;
                    sptr_t v287;
                    /* ("CJhc.Prim.Prim.:" ni215 ni287) */
                    v215 = ((struct sCJhc_Prim_Prim_$x3a*)v100028)->a1;
                    v287 = ((struct sCJhc_Prim_Prim_$x3a*)v100028)->a2;
                    {   wptr_t v100030;
                        uint16_t v66;
                        gc_frame0(gc,2,v215,v287);
                        v100030 = bapply__12969(gc,v142055799,v215);
                        v66 = ((uint16_t)RAW_GET_UF(v100030));
                        if (0 == v66) {
                            v142055799 = v142055799;
                            v157368002 = v287;
                            goto bRfJhc_List_filter$d2u43;
                        } else {
                            /* 1 */
                            assert(1 == v66);
                            sptr_t x44 = s_alloc(gc,cFJhc_List_filter$d2);
                            ((struct sFJhc_List_filter$d2*)x44)->head = TO_FPTR(&E__fJhc_List_filter$d2);
                            ((struct sFJhc_List_filter$d2*)x44)->a1 = v142055799;
                            ((struct sFJhc_List_filter$d2*)x44)->a2 = v287;
                            sptr_t v27361116 = MKLAZY(x44);
                            {   gc_frame0(gc,1,v27361116);
                                wptr_t x45 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                ((struct sCJhc_Prim_Prim_$x3a*)x45)->a1 = v215;
                                ((struct sCJhc_Prim_Prim_$x3a*)x45)->a2 = v27361116;
                                return x45;
                            }
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Show_showString(gc_t gc,wptr_t v146554548,sptr_t v261071130)
{
        return fJhc_Basics_$pp(gc,v146554548,v261071130);
}

static wptr_t A_STD A_MALLOC
fJhc_Show_shows(gc_t gc,sptr_t v77260792,sptr_t v206123614)
{
        return fJhc_Show_showsPrec(gc,SET_RAW_TAG(TJhc_Type_Word_Int),PROMOTE(c127),v77260792,v206123614);
}

static wptr_t A_STD A_MALLOC
fJhc_Show_showsPrec(gc_t gc,wptr_t v1464211995,wptr_t v97079480,sptr_t v125289868,sptr_t v194599746)
{
        if (SET_RAW_TAG(TJhc_Type_Word_Int) == v1464211995) {
            uint32_t v108606846;
            v108606846 = ((struct sCJhc_Type_Word_Int*)v97079480)->a1;
            {   uint32_t v23898644;
                gc_frame0(gc,1,v194599746);
                wptr_t v100090 = eval(gc,v125289868);
                v23898644 = ((struct sCJhc_Type_Word_Int*)v100090)->a1;
                uint16_t v100092 = (((int32_t)0) > ((int32_t)v23898644));
                if (0 == v100092) {
                    uintmax_t v130320090 = ((intmax_t)((int32_t)v23898644));
                    uint32_t v103795452 = ((uint32_t)v130320090);
                    return fW$__fJhc_Inst_Show_showWord(gc,v103795452,v194599746);
                } else {
                    /* 1 */
                    assert(1 == v100092);
                    uint16_t v100094 = (((int32_t)6) < ((int32_t)v108606846));
                    if (0 == v100094) {
                        return fJhc_Show_showsPrec$d2(gc,v23898644,v194599746);
                    } else {
                        wptr_t v421;
                        /* 1 */
                        assert(1 == v100094);
                        wptr_t x28 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x28)->a1 = ((sptr_t)RAW_SET_UF(')'));
                        ((struct sCJhc_Prim_Prim_$x3a*)x28)->a2 = v194599746;
                        wptr_t v303 = x28;
                        sptr_t v133308862 = demote(v303);
                        v421 = fJhc_Show_showsPrec$d2(gc,v23898644,v133308862);
                        sptr_t v24619818 = demote(v421);
                        {   gc_frame0(gc,1,v24619818);
                            wptr_t x29 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x29)->a1 = ((sptr_t)RAW_SET_UF('('));
                            ((struct sCJhc_Prim_Prim_$x3a*)x29)->a2 = v24619818;
                            return x29;
                        }
                    }
                }
            }
        } else {
            wptr_t v81659226;
            /* ("TJhc.Prim.Prim.[]" nd81659226) */
            v81659226 = ((struct sTJhc_Prim_Prim_$BE*)v1464211995)->a1;
            if (SET_RAW_TAG(TJhc_Type_Word_Int) == v81659226) {
                return fInstance$__iJhc_Show_showList_default(gc,v125289868,v194599746);
            } else {
                /* ("TJhc.Type.Basic.Char") */
                {   gc_frame0(gc,2,v125289868,v194599746);
                    sptr_t x30 = s_alloc(gc,cFPrelude_Text_30__showl);
                    ((struct sFPrelude_Text_30__showl*)x30)->head = TO_FPTR(&E__fPrelude_Text_30__showl);
                    ((struct sFPrelude_Text_30__showl*)x30)->a1 = v125289868;
                    ((struct sFPrelude_Text_30__showl*)x30)->a2 = v194599746;
                    sptr_t v61469712 = MKLAZY(x30);
                    {   gc_frame0(gc,1,v61469712);
                        wptr_t x31 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x31)->a1 = ((sptr_t)RAW_SET_UF('"'));
                        ((struct sCJhc_Prim_Prim_$x3a*)x31)->a2 = v61469712;
                        return x31;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Show_showsPrec$d2(gc_t gc,uint32_t v206123622,sptr_t v90806938)
{
        uint32_t v139105176 = (-((int32_t)v206123622));
        uintmax_t v234966402 = ((intmax_t)((int32_t)v139105176));
        uint32_t v37512292 = ((uint32_t)v234966402);
        {   gc_frame0(gc,1,v90806938);
            sptr_t x11 = s_alloc(gc,cFW$__fJhc_Inst_Show_showWord);
            ((struct sFW$__fJhc_Inst_Show_showWord*)x11)->head = TO_FPTR(&E__fW$__fJhc_Inst_Show_showWord);
            ((struct sFW$__fJhc_Inst_Show_showWord*)x11)->a1 = v37512292;
            ((struct sFW$__fJhc_Inst_Show_showWord*)x11)->a2 = v90806938;
            sptr_t v240646406 = MKLAZY(x11);
            {   gc_frame0(gc,1,v240646406);
                wptr_t x12 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x12)->a1 = ((sptr_t)RAW_SET_UF('-'));
                ((struct sCJhc_Prim_Prim_$x3a*)x12)->a2 = v240646406;
                return x12;
            }
        }
}

static wptr_t A_STD A_MALLOC
fPrelude_Text_30__showl(gc_t gc,sptr_t v284,sptr_t v27441726)
{
        {   gc_frame0(gc,1,v27441726);
            wptr_t v100062 = eval(gc,v284);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100062) {
                wptr_t x39 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x39)->a1 = ((sptr_t)RAW_SET_UF('"'));
                ((struct sCJhc_Prim_Prim_$x3a*)x39)->a2 = v27441726;
                return x39;
            } else {
                sptr_t v286;
                sptr_t v288;
                /* ("CJhc.Prim.Prim.:" ni286 ni288) */
                v286 = ((struct sCJhc_Prim_Prim_$x3a*)v100062)->a1;
                v288 = ((struct sCJhc_Prim_Prim_$x3a*)v100062)->a2;
                {   uint32_t v292;
                    gc_frame0(gc,1,v288);
                    wptr_t v100064 = eval(gc,v286);
                    v292 = ((uint32_t)RAW_GET_UF(v100064));
                    if (34 == v292) {
                        sptr_t x40 = s_alloc(gc,cFPrelude_Text_30__showl);
                        ((struct sFPrelude_Text_30__showl*)x40)->head = TO_FPTR(&E__fPrelude_Text_30__showl);
                        ((struct sFPrelude_Text_30__showl*)x40)->a1 = v288;
                        ((struct sFPrelude_Text_30__showl*)x40)->a2 = v27441726;
                        sptr_t v163033702 = MKLAZY(x40);
                        return fJhc_Show_showString(gc,PROMOTE(c131),v163033702);
                    } else {
                        sptr_t x41 = s_alloc(gc,cFPrelude_Text_30__showl);
                        ((struct sFPrelude_Text_30__showl*)x41)->head = TO_FPTR(&E__fPrelude_Text_30__showl);
                        ((struct sFPrelude_Text_30__showl*)x41)->a1 = v288;
                        ((struct sFPrelude_Text_30__showl*)x41)->a2 = v27441726;
                        sptr_t v100874992 = MKLAZY(x41);
                        return fW$__fPrelude_Text_showLitChar(gc,v292,v100874992);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fR$__fJhc_Basics_$pp(gc_t gc,sptr_t v101379726,sptr_t v2401354)
{
        {   gc_frame0(gc,1,v2401354);
            wptr_t v100046 = eval(gc,v101379726);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100046) {
                return eval(gc,v2401354);
            } else {
                sptr_t v136;
                sptr_t v321;
                /* ("CJhc.Prim.Prim.:" ni136 ni321) */
                v136 = ((struct sCJhc_Prim_Prim_$x3a*)v100046)->a1;
                v321 = ((struct sCJhc_Prim_Prim_$x3a*)v100046)->a2;
                {   gc_frame0(gc,2,v136,v321);
                    sptr_t x13 = s_alloc(gc,cFR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x13)->head = TO_FPTR(&E__fR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x13)->a1 = v321;
                    ((struct sFR$__fJhc_Basics_$pp*)x13)->a2 = v2401354;
                    sptr_t v53352308 = MKLAZY(x13);
                    {   gc_frame0(gc,1,v53352308);
                        wptr_t x14 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x14)->a1 = v136;
                        ((struct sCJhc_Prim_Prim_$x3a*)x14)->a2 = v53352308;
                        return x14;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fR$__fJhc_Show_11__showl(gc_t gc,sptr_t v69007232,sptr_t v201964564)
{
        {   sptr_t v216;
            sptr_t v222;
            struct tup1 x35;
            gc_frame0(gc,1,v201964564);
            wptr_t v100189 = eval(gc,v69007232);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100189) {
                x35.t0 = ((sptr_t)RAW_SET_UF(']'));
                x35.t1 = v201964564;
            } else {
                sptr_t v31263104;
                sptr_t v53770040;
                /* ("CJhc.Prim.Prim.:" ni31263104 ni53770040) */
                v31263104 = ((struct sCJhc_Prim_Prim_$x3a*)v100189)->a1;
                v53770040 = ((struct sCJhc_Prim_Prim_$x3a*)v100189)->a2;
                {   gc_frame0(gc,2,v31263104,v53770040);
                    sptr_t x36 = s_alloc(gc,cFR$__fJhc_Show_11__showl);
                    ((struct sFR$__fJhc_Show_11__showl*)x36)->head = TO_FPTR(&E__fR$__fJhc_Show_11__showl);
                    ((struct sFR$__fJhc_Show_11__showl*)x36)->a1 = v53770040;
                    ((struct sFR$__fJhc_Show_11__showl*)x36)->a2 = v201964564;
                    sptr_t v117548738 = MKLAZY(x36);
                    {   gc_frame0(gc,1,v117548738);
                        sptr_t x37 = s_alloc(gc,cFJhc_Show_shows);
                        ((struct sFJhc_Show_shows*)x37)->head = TO_FPTR(&E__fJhc_Show_shows);
                        ((struct sFJhc_Show_shows*)x37)->a1 = v31263104;
                        ((struct sFJhc_Show_shows*)x37)->a2 = v117548738;
                        sptr_t v134403510 = MKLAZY(x37);
                        x35.t0 = ((sptr_t)RAW_SET_UF(','));
                        x35.t1 = v134403510;
                    }
                }
            }
            v216 = x35.t0;
            v222 = x35.t1;
            {   gc_frame0(gc,2,v216,v222);
                wptr_t x38 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x38)->a1 = v216;
                ((struct sCJhc_Prim_Prim_$x3a*)x38)->a2 = v222;
                return x38;
            }
        }
}

static wptr_t A_STD A_MALLOC
fR$__fMain_quicksort(gc_t gc,wptr_t v77366866)
{
        return bRfR$__fMain_quicksort(gc,v77366866);
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_Enum_39__f(gc_t gc,uint32_t v108606840)
{
        wptr_t x46 = s_alloc(gc,cCJhc_Type_Word_Int);
        ((struct sCJhc_Type_Word_Int*)x46)->a1 = v108606840;
        wptr_t v387 = x46;
        sptr_t v131100610 = demote(v387);
        uint16_t v100026 = (((int32_t)20000) < ((int32_t)v108606840));
        if (0 == v100026) {
            uint32_t v2401352 = (1 + v108606840);
            {   gc_frame0(gc,1,v131100610);
                sptr_t x47 = s_alloc(gc,cFW$__fJhc_Enum_39__f);
                ((struct sFW$__fJhc_Enum_39__f*)x47)->head = TO_FPTR(&E__fW$__fJhc_Enum_39__f);
                ((struct sFW$__fJhc_Enum_39__f*)x47)->a1 = v2401352;
                sptr_t v241573762 = MKLAZY(x47);
                {   gc_frame0(gc,1,v241573762);
                    wptr_t x48 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x48)->a1 = v131100610;
                    ((struct sCJhc_Prim_Prim_$x3a*)x48)->a2 = v241573762;
                    return x48;
                }
            }
        } else {
            /* 1 */
            assert(1 == v100026);
            return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
        }
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_Inst_Show_showWord(gc_t gc,uint32_t v1619271219,sptr_t v1622548013)
{
        sptr_t v69723200;
        uint32_t v264753294;
        v264753294 = v1619271219;
        v69723200 = v1622548013;
        fW$__fR$__fJhc_Inst_Show_showWord__8:;
        {   uint32_t v46435058 = (v264753294 / 10);
            uint32_t v261071132 = (v264753294 % 10);
            uintmax_t v131733798 = ((uintmax_t)v261071132);
            uint32_t v239145328 = ((uint32_t)v131733798);
            uint32_t v155397192 = (48 + v239145328);
            uint32_t v151359592 = v155397192;
            {   gc_frame0(gc,1,v69723200);
                wptr_t v208 = RAW_SET_UF(v151359592);
                sptr_t v65620012 = demote(v208);
                if (0 == v46435058) {
                    {   gc_frame0(gc,1,v65620012);
                        wptr_t x9 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x9)->a1 = v65620012;
                        ((struct sCJhc_Prim_Prim_$x3a*)x9)->a2 = v69723200;
                        return x9;
                    }
                } else {
                    {   gc_frame0(gc,1,v65620012);
                        wptr_t x10 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x10)->a1 = v65620012;
                        ((struct sCJhc_Prim_Prim_$x3a*)x10)->a2 = v69723200;
                        wptr_t v353 = x10;
                        sptr_t v1625431599 = demote(v353);
                        v264753294 = v46435058;
                        v69723200 = v1625431599;
                        goto fW$__fR$__fJhc_Inst_Show_showWord__8;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fPrelude_Text_showLitChar(gc_t gc,uint32_t v889454615,sptr_t v263598668)
{
        uint16_t v100040 = (127 < v889454615);
        if (0 == v100040) {
            switch (v889454615) {
            case 92:
                {   return fJhc_Show_showString(gc,PROMOTE(c109),v263598668);
                }
                break;
            case 127:
                {   return fJhc_Show_showString(gc,PROMOTE(c111),v263598668);
                }
                break;
            default:
                {   uint32_t v54678592;
                    v54678592 = v889454615;
                    uint16_t v100042 = (32 <= v889454615);
                    if (0 == v100042) {
                        sptr_t v145;
                        sptr_t v75;
                        struct tup1 x19;
                        switch (v54678592) {
                        case 7:
                            {   x19.t0 = c113;
                                x19.t1 = v263598668;
                            }
                            break;
                        case 8:
                            {   x19.t0 = c115;
                                x19.t1 = v263598668;
                            }
                            break;
                        case 9:
                            {   x19.t0 = c117;
                                x19.t1 = v263598668;
                            }
                            break;
                        case 10:
                            {   x19.t0 = c119;
                                x19.t1 = v263598668;
                            }
                            break;
                        case 11:
                            {   x19.t0 = c121;
                                x19.t1 = v263598668;
                            }
                            break;
                        case 12:
                            {   x19.t0 = c123;
                                x19.t1 = v263598668;
                            }
                            break;
                        case 13:
                            {   x19.t0 = c125;
                                x19.t1 = v263598668;
                            }
                            break;
                        case 14:
                            {   {   gc_frame0(gc,1,v263598668);
                                    sptr_t x20 = s_alloc(gc,cFW$__fPrelude_Text_showLitChar$d3);
                                    ((struct sFW$__fPrelude_Text_showLitChar$d3*)x20)->head = TO_FPTR(&E__fW$__fPrelude_Text_showLitChar$d3);
                                    ((struct sFW$__fPrelude_Text_showLitChar$d3*)x20)->a1 = v263598668;
                                    sptr_t v123725540 = MKLAZY(x20);
                                    x19.t0 = c126;
                                    x19.t1 = v123725540;
                                }
                            }
                            break;
                        default:
                            {   uint32_t v177396244 = v889454615;
                                {   gc_frame0(gc,1,v263598668);
                                    sptr_t x21 = s_alloc(gc,cFW$__fPrelude_Text_showLitChar$d4);
                                    ((struct sFW$__fPrelude_Text_showLitChar$d4*)x21)->head = TO_FPTR(&E__fW$__fPrelude_Text_showLitChar$d4);
                                    ((struct sFW$__fPrelude_Text_showLitChar$d4*)x21)->a1 = v177396244;
                                    sptr_t v180543942 = MKLAZY(x21);
                                    {   gc_frame0(gc,1,v180543942);
                                        wptr_t x22 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                        ((struct sCJhc_Prim_Prim_$x3a*)x22)->a1 = ((sptr_t)RAW_SET_UF('\\'));
                                        ((struct sCJhc_Prim_Prim_$x3a*)x22)->a2 = v180543942;
                                        wptr_t v184 = x22;
                                        sptr_t v219380246 = demote(v184);
                                        x19.t0 = v219380246;
                                        x19.t1 = v263598668;
                                    }
                                }
                            }
                        break;
                        }
                        v145 = x19.t0;
                        v75 = x19.t1;
                        wptr_t v511 = promote(v145);
                        return fJhc_Show_showString(gc,v511,v75);
                    } else {
                        /* 1 */
                        assert(1 == v100042);
                        {   gc_frame0(gc,1,v263598668);
                            wptr_t v73 = RAW_SET_UF(v889454615);
                            sptr_t v5392770 = demote(v73);
                            {   gc_frame0(gc,1,v5392770);
                                wptr_t x23 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                ((struct sCJhc_Prim_Prim_$x3a*)x23)->a1 = v5392770;
                                ((struct sCJhc_Prim_Prim_$x3a*)x23)->a2 = v263598668;
                                return x23;
                            }
                        }
                    }
                }
            break;
            }
        } else {
            /* 1 */
            assert(1 == v100040);
            uint32_t v55244940 = v889454615;
            {   gc_frame0(gc,1,v263598668);
                sptr_t x24 = s_alloc(gc,cFW$__fPrelude_Text_showLitChar$d2);
                ((struct sFW$__fPrelude_Text_showLitChar$d2*)x24)->head = TO_FPTR(&E__fW$__fPrelude_Text_showLitChar$d2);
                ((struct sFW$__fPrelude_Text_showLitChar$d2*)x24)->a1 = v263598668;
                sptr_t v242729616 = MKLAZY(x24);
                {   gc_frame0(gc,1,v242729616);
                    wptr_t x25 = s_alloc(gc,cCJhc_Type_Word_Int);
                    ((struct sCJhc_Type_Word_Int*)x25)->a1 = v55244940;
                    wptr_t v156 = x25;
                    sptr_t v220559738 = demote(v156);
                    {   gc_frame0(gc,1,v220559738);
                        sptr_t x26 = s_alloc(gc,cFJhc_Show_shows);
                        ((struct sFJhc_Show_shows*)x26)->head = TO_FPTR(&E__fJhc_Show_shows);
                        ((struct sFJhc_Show_shows*)x26)->a1 = v220559738;
                        ((struct sFJhc_Show_shows*)x26)->a2 = v242729616;
                        sptr_t v243029298 = MKLAZY(x26);
                        {   gc_frame0(gc,1,v243029298);
                            wptr_t x27 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x27)->a1 = ((sptr_t)RAW_SET_UF('\\'));
                            ((struct sCJhc_Prim_Prim_$x3a*)x27)->a2 = v243029298;
                            return x27;
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fPrelude_Text_showLitChar$d2(gc_t gc,sptr_t v117006190)
{
        {   gc_frame0(gc,1,v117006190);
            wptr_t v100052 = eval(gc,v117006190);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100052) {
                return v100052;
            } else {
                sptr_t v5240;
                sptr_t v5242;
                /* ("CJhc.Prim.Prim.:" ni5240 ni5242) */
                v5240 = ((struct sCJhc_Prim_Prim_$x3a*)v100052)->a1;
                v5242 = ((struct sCJhc_Prim_Prim_$x3a*)v100052)->a2;
                {   uint32_t v2759250;
                    gc_frame0(gc,2,v5240,v5242);
                    wptr_t v100054 = eval(gc,v5240);
                    v2759250 = ((uint32_t)RAW_GET_UF(v100054));
                    uint16_t v100056 = (48 <= v2759250);
                    if (0 == v100056) {
                        wptr_t x16 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x16)->a1 = v5240;
                        ((struct sCJhc_Prim_Prim_$x3a*)x16)->a2 = v5242;
                        return x16;
                    } else {
                        /* 1 */
                        assert(1 == v100056);
                        uint16_t v100058 = (57 >= v2759250);
                        if (0 == v100058) {
                            wptr_t x17 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x17)->a1 = v5240;
                            ((struct sCJhc_Prim_Prim_$x3a*)x17)->a2 = v5242;
                            return x17;
                        } else {
                            /* 1 */
                            assert(1 == v100058);
                            return fJhc_Basics_$pp(gc,PROMOTE(c2),v117006190);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fPrelude_Text_showLitChar$d3(gc_t gc,sptr_t v224064300)
{
        {   gc_frame0(gc,1,v224064300);
            wptr_t v100048 = eval(gc,v224064300);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100048) {
                return v100048;
            } else {
                sptr_t v180830536;
                sptr_t v62147906;
                /* ("CJhc.Prim.Prim.:" ni62147906 ni180830536) */
                v62147906 = ((struct sCJhc_Prim_Prim_$x3a*)v100048)->a1;
                v180830536 = ((struct sCJhc_Prim_Prim_$x3a*)v100048)->a2;
                {   uint32_t v182417330;
                    gc_frame0(gc,2,v62147906,v180830536);
                    wptr_t v100050 = eval(gc,v62147906);
                    v182417330 = ((uint32_t)RAW_GET_UF(v100050));
                    if (72 == v182417330) {
                        return fJhc_Basics_$pp(gc,PROMOTE(c2),v224064300);
                    } else {
                        wptr_t x15 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x15)->a1 = v62147906;
                        ((struct sCJhc_Prim_Prim_$x3a*)x15)->a2 = v180830536;
                        return x15;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fPrelude_Text_showLitChar$d4(gc_t gc,uint32_t v187669880)
{
        uint32_t v54;
        uint16_t v100044 = (((int32_t)0) > ((int32_t)v187669880));
        if (0 == v100044) {
            v54 = v187669880;
        } else {
            /* 1 */
            assert(1 == v100044);
            jhc_error("Prelude.error: Prelude.(!!): negative index");
        }
        return fW$__fR$__fJhc_List_243__sub(gc,PROMOTE(c107),v54);
}

static wptr_t A_STD A_MALLOC
fW$__fR$__fJhc_Basics_136__f(gc_t gc,uint32_t v23898648,wptr_t v46435056)
{
        sptr_t v46435257;
        uint32_t v23898848;
        sptr_t v46435067 = demote(v46435056);
        v23898848 = v23898648;
        v46435257 = v46435067;
        bRfW$__fR$__fJhc_Basics_136__f__49:;
        {   uint16_t v100000 = (((int32_t)0) >= ((int32_t)v23898848));
            if (0 == v100000) {
                wptr_t v100002 = eval(gc,v46435257);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100002) {
                    return v100002;
                } else {
                    sptr_t v304;
                    /* ("CJhc.Prim.Prim.:" ni0 ni304) */
                    v304 = ((struct sCJhc_Prim_Prim_$x3a*)v100002)->a2;
                    uint32_t v83545202 = (v23898848 - 1);
                    v23898848 = v83545202;
                    v46435257 = v304;
                    goto bRfW$__fR$__fJhc_Basics_136__f__49;
                }
            } else {
                /* 1 */
                assert(1 == v100000);
                return eval(gc,v46435257);
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fR$__fJhc_List_243__sub(gc_t gc,wptr_t v108606838,uint32_t v127020196)
{
        sptr_t v108606886;
        uint32_t v127020245;
        sptr_t v108607102 = demote(v108606838);
        v108606886 = v108607102;
        v127020245 = v127020196;
        bRfW$__fR$__fJhc_List_243__sub__18:;
        {   wptr_t v100038 = eval(gc,v108606886);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100038) {
                jhc_error("Prelude.error: Prelude.(!!): index too large");
                return NULL;
            } else {
                sptr_t v132;
                sptr_t v405;
                /* ("CJhc.Prim.Prim.:" ni132 ni405) */
                v132 = ((struct sCJhc_Prim_Prim_$x3a*)v100038)->a1;
                v405 = ((struct sCJhc_Prim_Prim_$x3a*)v100038)->a2;
                if (0 == v127020245) {
                    return eval(gc,v132);
                } else {
                    uint32_t v55080222 = (v127020245 - 1);
                    v108606886 = v405;
                    v127020245 = v55080222;
                    goto bRfW$__fR$__fJhc_List_243__sub__18;
                }
            }
        }
}

static void A_STD
ftheMain(gc_t gc)
{
        wptr_t v100066;
        sptr_t v225;
        v100066 = fInstance$__iJhc_Show_show_default(gc,PROMOTE(c132),g1005854741);
        sptr_t v236158390 = demote(v100066);
        v225 = v236158390;
        fJhc_Monad_72__go__42:;
        {   wptr_t v100070 = eval(gc,v225);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100070) {
                SET_RAW_TAG(CJhc_Prim_Prim_$LR);
            } else {
                sptr_t v229;
                sptr_t v30;
                /* ("CJhc.Prim.Prim.:" ni229 ni30) */
                v229 = ((struct sCJhc_Prim_Prim_$x3a*)v100070)->a1;
                v30 = ((struct sCJhc_Prim_Prim_$x3a*)v100070)->a2;
                {   uint32_t v103980512;
                    gc_frame0(gc,1,v30);
                    wptr_t v100072 = eval(gc,v229);
                    v103980512 = ((uint32_t)RAW_GET_UF(v100072));
                    uint32_t v28485250 = v103980512;
                    saved_gc = gc;
                    (void)jhc_utf8_putchar((int)v28485250);
                    v225 = v30;
                    goto fJhc_Monad_72__go__42;
                }
            }
        }
        saved_gc = gc;
        return (void)jhc_utf8_putchar((int)10);
}

static uint16_t A_STD
ftheMain$d2(gc_t gc,sptr_t v177396240,uint32_t v326377505)
{
        uint32_t v101379728;
        wptr_t v100024 = eval(gc,v177396240);
        v101379728 = ((struct sCJhc_Type_Word_Int*)v100024)->a1;
        return ((int32_t)v326377505) < ((int32_t)v101379728);
}

static wptr_t A_STD A_MALLOC
ftheMain$d3(gc_t gc,sptr_t v346562589,sptr_t v219985668)
{
        {   sptr_t v247;
            uint16_t v263598670;
            uint32_t v63014770;
            gc_frame0(gc,1,v346562589);
            wptr_t v100020 = eval(gc,v219985668);
            wptr_t v100022 = promote(v346562589);
            v63014770 = ((struct sCJhc_Type_Word_Int*)v100020)->a1;
            v247 = ((struct sP1__theMain$d2*)v100022)->a1;
            v263598670 = ftheMain$d2(gc,v247,v63014770);
            return RAW_SET_UF(v263598670);
        }
}

static uint16_t A_STD
ftheMain$d4(gc_t gc,sptr_t v157435254,uint32_t v328474657)
{
        uint32_t v65615840;
        wptr_t v100018 = eval(gc,v157435254);
        v65615840 = ((struct sCJhc_Type_Word_Int*)v100018)->a1;
        return ((int32_t)v328474657) >= ((int32_t)v65615840);
}

static wptr_t A_STD A_MALLOC
ftheMain$d5(gc_t gc,sptr_t v344596511,sptr_t v177396242)
{
        {   sptr_t v259;
            uint32_t v125052412;
            uint16_t v142055664;
            gc_frame0(gc,1,v344596511);
            wptr_t v100014 = eval(gc,v177396242);
            wptr_t v100016 = promote(v344596511);
            v125052412 = ((struct sCJhc_Type_Word_Int*)v100014)->a1;
            v259 = ((struct sP1__theMain$d4*)v100016)->a1;
            v142055664 = ftheMain$d4(gc,v259,v125052412);
            return RAW_SET_UF(v142055664);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d6(gc_t gc,sptr_t v233944134,wptr_t v262320664)
{
        wptr_t v100034;
        v100034 = fJhc_List_filter(gc,v262320664,v233944134);
        return fR$__fMain_quicksort(gc,v100034);
}

static wptr_t A_STD A_MALLOC
ftheMain$d7(gc_t gc)
{
        wptr_t v100074;
        wptr_t v100078;
        v100074 = fW$__fJhc_Enum_39__f(gc,1);
        v100078 = fR$__fMain_quicksort(gc,v100074);
        return fW$__fR$__fJhc_Basics_136__f(gc,19999,v100078);
}

static wptr_t A_STD A_MALLOC
ftheMain$d8(gc_t gc)
{
        return fInstance$__iJhc_Show_show_default(gc,PROMOTE(c133),g1007165461);
}
