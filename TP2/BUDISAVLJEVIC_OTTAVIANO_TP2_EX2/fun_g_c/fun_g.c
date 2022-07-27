/* --- Generated the 6/12/2020 at 19:17 --- */
/* --- heptagon compiler, version 1.00.06 (compiled wed. dec. 4 22:24:42 CET 2019) --- */
/* --- Command line: heptc -target c fun_g.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fun_g.h"

void Fun_g__fun_g_reset(Fun_g__fun_g_mem* self) {
  self->mem_cnt = 300;
}

void Fun_g__fun_g_step(int* cnt, Fun_g__fun_g_mem* self) {
  
  int v;
  *cnt = self->mem_cnt;
  v = ((*cnt)+50);
  self->mem_cnt = v;;
}

