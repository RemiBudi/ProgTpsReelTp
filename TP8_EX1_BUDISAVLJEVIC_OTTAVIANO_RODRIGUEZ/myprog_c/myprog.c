/* --- Generated the 23/11/2020 at 17:40 --- */
/* --- heptagon compiler, version 1.00.06 (compiled wed. dec. 4 22:24:42 CET 2019) --- */
/* --- Command line: heptc -target c myprog.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "myprog.h"

void Myprog__reduceFloat_50_step(float* input, float* output) {
  *output = ((*input)*0.500000);
}

void Myprog__reduce_50_step(float input[256], float out[256]) {
  {
    int i;
    for (i = 0; i < 256; ++i) {
      Myprog__reduceFloat_50_step(&input[i], &out[i]);
    }
  };
}

void Myprog__main_step() {
  
  int size[1];
  float input[256];
  float out[256];
  size[0] = 256;
  Sndio__read_samples_step(size, input);
  Myprog__reduce_50_step(input, out);
  Sndio__write_samples_step(size, out);;
}

