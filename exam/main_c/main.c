/* --- Generated the 7/12/2020 at 17:58 --- */
/* --- heptagon compiler, version 1.00.06 (compiled wed. dec. 4 22:24:42 CET 2019) --- */
/* --- Command line: heptc -target c main.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

void Main__modulo_cnt_params_8__reset(Main__modulo_cnt_params_8__mem* self) {
  self->v_1 = 0;
}

void Main__modulo_cnt_params_8__step(int* cnt,
                                     Main__modulo_cnt_params_8__mem* self) {
  
  int v;
  *cnt = (self->v_1%8);
  v = ((*cnt)+1);
  self->v_1 = v;;
}

void Main__square_params_4__reset(Main__square_params_4__mem* self) {
  Main__modulo_cnt_params_8__reset(&self->modulo_cnt);
}

void Main__square_params_4__step(bool* clk, Main__square_params_4__mem* self) {
  
  bool v_4;
  int v;
  Main__modulo_cnt_params_8__step(&v, &self->modulo_cnt);
  v_4 = (v>3);
  if (v_4) {
    *clk = true;
  } else {
    *clk = false;
  };;
}

void Main__main_reset(Main__main_mem* self) {
  Main__square_params_4__reset(&self->square);
  self->out = 0;
}

void Main__main_step(Main__main_mem* self) {
  
  int v_7;
  int v_6;
  int v;
  bool b;
  Externc__write_int_step(&self->out);
  v_6 = (self->out+1);
  v = (self->out-1);
  Main__square_params_4__step(&b, &self->square);
  if (b) {
    v_7 = v;
  } else {
    v_7 = v_6;
  };
  self->out = v_7;;
}

