#include "exo3_c/exo3.h"
#include "print.h"
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>

int main(){

	Exo3__main_mem mem;
	Exo3__main_reset(&mem);
	
	for(;;){
		Exo3__main_step(&mem);
		usleep(1000000);
	}
	return 0;
}
