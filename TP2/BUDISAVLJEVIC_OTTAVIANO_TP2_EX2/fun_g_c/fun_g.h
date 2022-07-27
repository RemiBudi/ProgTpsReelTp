/* --- Generated the 6/12/2020 at 19:17 --- */
/* --- heptagon compiler, version 1.00.06 (compiled wed. dec. 4 22:24:42 CET 2019) --- */
/* --- Command line: heptc -target c fun_g.ept --- */

#ifndef FUN_G_H
#define FUN_G_H

#include "fun_g_types.h"
typedef struct Fun_g__fun_g_mem {
  int mem_cnt;
} Fun_g__fun_g_mem;

void Fun_g__fun_g_reset(Fun_g__fun_g_mem* self);

void Fun_g__fun_g_step(int* cnt, Fun_g__fun_g_mem* self);

#endif // FUN_G_H
