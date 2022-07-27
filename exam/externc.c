#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "externc.h"


void Externc__write_int_step(int*i){
	printf("L'entier est: %d\n",*i);
}

void Externc__write_bool_step(bool*i){
	printf("Boolean %d\n",*i);
}
