#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "print.h"

void Print__print_f_step(int*x, int*y, int*idx){
	printf("Node fast: idx=%d\nx=%d  y=%d\n\n",*idx,*x,*y);
}
	
	
void Print__print_gnc_step(int*x, int*y, int*idx){
	printf("Node gnc: idx=%d\nx=%d  y=%d\n\n",*idx,*x,*y);
}

void Print__print_thermal_step(int*idx){
	printf("Node thermal: idx=%d\n\n",*idx);
}

void Print__print_rien_step(){
	printf("");
}
