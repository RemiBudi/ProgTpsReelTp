/* --- Generated the 7/12/2020 at 17:58 --- */
/* --- heptagon compiler, version 1.00.06 (compiled wed. dec. 4 22:24:42 CET 2019) --- */
/* --- Command line: heptc -target c main.ept --- */

#ifndef MAIN_H
#define MAIN_H

#include "main_types.h"
#include "externc.h"
typedef struct Main__modulo_cnt_params_8__mem {
  int v_1;
} Main__modulo_cnt_params_8__mem;

void Main__modulo_cnt_params_8__reset(Main__modulo_cnt_params_8__mem* self);

void Main__modulo_cnt_params_8__step(int* cnt,
                                     Main__modulo_cnt_params_8__mem* self);

typedef struct Main__square_params_4__mem {
  Main__modulo_cnt_params_8__mem modulo_cnt;
} Main__square_params_4__mem;

void Main__square_params_4__reset(Main__square_params_4__mem* self);

void Main__square_params_4__step(bool* clk, Main__square_params_4__mem* self);

typedef struct Main__main_mem {
  int out;
  Main__square_params_4__mem square;
} Main__main_mem;

void Main__main_reset(Main__main_mem* self);

void Main__main_step(Main__main_mem* self);

#endif // MAIN_H
