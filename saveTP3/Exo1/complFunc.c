#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "complFunc.h"

void ComplFunc__read_complex_step(ComplFunc__complex*o){
	printf("Real part\n");
	scanf("%f",&o->re);
	printf("Im part\n");
	scanf("%f",&o->im);
}

void ComplFunc__print_complex_step(ComplFunc__complex*o){
	printf("\nz = %f + %fi\n\n", o->re,o->im);
}

void ComplFunc__print_add_step(){printf("Addition :");}
	
void ComplFunc__print_sub_step(){printf("Soustraction :");}

void ComplFunc__print_mul_step(){printf("Multiplication :");}
