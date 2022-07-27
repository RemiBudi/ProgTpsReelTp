/* --- Generated the 23/11/2020 at 17:40 --- */
/* --- heptagon compiler, version 1.00.06 (compiled wed. dec. 4 22:24:42 CET 2019) --- */
/* --- Command line: heptc -target c myprog.ept --- */

#ifndef MYPROG_H
#define MYPROG_H

#include "myprog_types.h"
#include "sndio.h"
void Myprog__reduceFloat_50_step(float* input, float* output);

void Myprog__reduce_50_step(float input[256], float out[256]);

void Myprog__main_step();

#endif // MYPROG_H
