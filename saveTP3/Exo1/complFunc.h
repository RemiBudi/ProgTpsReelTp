#ifndef COMPLFUNC_H
#define COMPLFUNC_H

#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>

typedef struct ComplFunc__complex{
	float re;
	float im;
}ComplFunc__complex;

void ComplFunc__read_complex_step(ComplFunc__complex*o);
void ComplFunc__print_complex_step(ComplFunc__complex*o);
void ComplFunc__print_add_step();
void ComplFunc__print_sub_step();
void ComplFunc__print_mul_step();

#endif
