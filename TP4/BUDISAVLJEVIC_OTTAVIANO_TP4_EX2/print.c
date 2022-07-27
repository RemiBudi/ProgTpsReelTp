#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "print.h"


void Print__print_complex_step(Typecomplex__complex*o){
	printf("\nz = %f + %fi\n\n", o->re,o->im);
}


void Print__printVector8_step(Typecomplex__complex o[8]){
	
	printf("\n*****ifft du vecteur donné*****\n");
	for(int i=0; i<8;i++){
		printf("\nz%d = %f + %fi\n\n", i, o[i].re,o[i].im);
	}
}

void Print__printVector16_step(Typecomplex__complex o[16]){
	
	printf("\n*****Fft du vecteur donné*****\n");
	for(int i=0; i<16;i++){
		printf("\nz%d = %f + %fi\n\n",i, o[i].re,o[i].im);

	}
	
	
	
}
