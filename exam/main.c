#include "main_c/main.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){
	
	Main__main_mem mem;
	Main__main_reset(&mem);
	
	for(;;){
		Main__main_step(&mem);
		usleep(1000000 + (rand()%1000000));
	}
		
	return 0;
	
}	
