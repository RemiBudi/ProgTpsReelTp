#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "complFunc.h"

void ComplFunc__read_complex_vector_step(ComplFunc__complex_vect o){
	for (int i=0; i<3; i++){
		printf("[%d]-Real part\n", i);
		scanf("%f",&o[i].re);
		printf("[%d]-Imaginary part\n", i);
		scanf("%f",&o[i].im);
	}	
}
	

void ComplFunc__print_complex_vector_step(ComplFunc__complex_vect o){
	for (int i=0; i<3; i++){
		printf("[%d] = %lf + i(%lf)\n", i, o[i].re, o[i].im);
	}
}

void ComplFunc__print_complex_step(ComplFunc__complex*o){
	printf("[Vect] = %f + i(%f)\n", o->re, o->im);
}

