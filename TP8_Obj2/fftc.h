#ifndef FFTC_H
#define FFTC_H

#include <stdio.h>
#include <string.h>
#include "stdbool.h"
#include "assert.h"
#include "complex.h"

#define datatype Complex__complex

			
void bitrev(datatype *data, unsigned int logN);

void Fftc__bitrev8_step(Complex__complex*i,Complex__complex*o);

void Fftc__bitrev16_step(Complex__complex*i,Complex__complex*o);		
			
void Fftc__bitrev1024_step(Complex__complex*i,Complex__complex*o);

#endif 
