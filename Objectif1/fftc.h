#ifndef FFTC_H
#define FFTC_H

#include <stdio.h>
#include <string.h>
#include "stdbool.h"
#include "assert.h"
#include "typecomplex.h"

#define datatype Typecomplex__complex

			
void bitrev(datatype *data, unsigned int logN);

void Fftc__bitrev8_step(Typecomplex__complex*i,Typecomplex__complex*o);

void Fftc__bitrev16_step(Typecomplex__complex*i,Typecomplex__complex*o);		
			


#endif 
