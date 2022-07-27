#ifndef TWIDDLE_H
#define TWIDDLE_H

#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "typecomplex.h"

Typecomplex__complex Twiddle__twiddle[1024];

void Twiddle__init_twiddle1024_step(Typecomplex__complex*twiddle);

#endif
