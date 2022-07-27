#include "exo2_c/exo2.h"
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>

int main(){

Exo2__main_mem mem;
Exo2__main_reset(&mem);

printf("\nNode\n");

	for(;;){
		Exo2__main_step(&mem);
	
	}
	return 0;
}
