#include "myprog_c/myprog.h"
#include "sndio.h"
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "fftc.h"
#include "complex.h"

int main(){
	
	Myprog__main_mem mem;
	
	Complex__init_twiddle1024_step(Complex__twiddle);
	
	for(;;)
		Myprog__main_step(&mem);
	
	return 0;
	
}
