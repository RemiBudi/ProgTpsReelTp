#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "print.h"
#include "twiddle.h"
#include "typecomplex.h"
#include "butterfly_c/butterfly.h"
#include "fftc.h"



int main(){

	Twiddle__init_twiddle1024_step(Twiddle__twiddle);
	
	Butterfly__main_step();
		
	
	return 0;
	
}
