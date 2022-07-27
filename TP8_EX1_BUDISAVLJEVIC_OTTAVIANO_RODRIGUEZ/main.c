#include "myprog_c/myprog.h"
#include "sndio.h"
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>


int main(){
	
	for(;;)
	Myprog__main_step();
	
	return 0;
	
}
