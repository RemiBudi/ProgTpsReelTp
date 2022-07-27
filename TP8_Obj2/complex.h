#ifndef COMPLEX_H
#define COMPLEX_H

#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>

typedef struct Complex__complex{
	float re;
	float im;
}Complex__complex;

Complex__complex Complex__twiddle[1024];

void Complex__init_twiddle1024_step(Complex__complex*twiddle);



static const float Complex__pi = 3.141593;

#endif
