#ifndef COMPLFUNC_H
#define COMPLFUNC_H

#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>

typedef struct ComplFunc__complex{
	float re;
	float im;
}ComplFunc__complex;

typedef ComplFunc__complex ComplFunc__complex_vect[3];

void ComplFunc__read_complex_vector_step(ComplFunc__complex_vect o);
void ComplFunc__print_complex_vector_step(ComplFunc__complex_vect o);
void ComplFunc__print_complex_step(ComplFunc__complex*o);

#endif
