/* --- Generated the 12/10/2020 at 19:1 --- */
/* --- heptagon compiler, version 1.00.06 (compiled wed. dec. 4 22:24:42 CET 2019) --- */
/* --- Command line: heptc -target c butterfly.ept --- */

#ifndef BUTTERFLY_H
#define BUTTERFLY_H

#include "butterfly_types.h"
#include "fftc.h"
#include "print.h"
#include "scan.h"
#include "twiddle.h"
#include "typecomplex.h"
void Butterfly__complex_add_step(Typecomplex__complex* i1,
                                 Typecomplex__complex* i2,
                                 Typecomplex__complex* o);

void Butterfly__twid_step(Typecomplex__complex* i1, Typecomplex__complex* i2,
                          Typecomplex__complex* tw, Typecomplex__complex* o);

void Butterfly__norm_params_16_000000__step(Typecomplex__complex* i,
                                            Typecomplex__complex* o);

void Butterfly__norm_params_8_000000__step(Typecomplex__complex* i,
                                           Typecomplex__complex* o);

void Butterfly__bf_params_8__step(Typecomplex__complex i1[8],
                                  Typecomplex__complex i2[8],
                                  Typecomplex__complex o1[8],
                                  Typecomplex__complex o2[8]);

void Butterfly__bf_params_4__step(Typecomplex__complex i1[4],
                                  Typecomplex__complex i2[4],
                                  Typecomplex__complex o1[4],
                                  Typecomplex__complex o2[4]);

void Butterfly__bf_params_2__step(Typecomplex__complex i1[2],
                                  Typecomplex__complex i2[2],
                                  Typecomplex__complex o1[2],
                                  Typecomplex__complex o2[2]);

void Butterfly__bf_params_1__step(Typecomplex__complex i1[1],
                                  Typecomplex__complex i2[1],
                                  Typecomplex__complex o1[1],
                                  Typecomplex__complex o2[1]);

void Butterfly__fft_aux2_step(Typecomplex__complex i[2],
                              Typecomplex__complex out[2]);

void Butterfly__fft_aux4_step(Typecomplex__complex i[4],
                              Typecomplex__complex out[4]);

void Butterfly__fft_aux8_step(Typecomplex__complex i[8],
                              Typecomplex__complex out[8]);

void Butterfly__fft_aux16_step(Typecomplex__complex i[16],
                               Typecomplex__complex out[16]);

void Butterfly__fft8_step(Typecomplex__complex i[8],
                          Typecomplex__complex o[8]);

void Butterfly__fft16_step(Typecomplex__complex i[16],
                           Typecomplex__complex o[16]);

void Butterfly__main_step();

#endif // BUTTERFLY_H
