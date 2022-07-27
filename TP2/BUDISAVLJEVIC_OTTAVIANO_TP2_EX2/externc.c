/* --- Generated the 27/9/2020 at 15:19 --- */
/* --- heptagon compiler, version 1.00.06 (compiled wed. dec. 4 22:24:42 CET 2019) --- */
/* --- Command line: heptc -target c externc.epi --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "externc.h"

void Externc__read_bool_step (int*addr,int*value) {
	printf("read_bool(%x):",*addr) ;
	fflush(stdout) ;
	scanf("%d",value) ;
}


void Externc__f1_step (int*i,int*o) {
	*o = *i+5 ;
	printf("f1(%d) returns (%d)\n",*i,*o) ;
}

void Externc__f2_step (int *i, int *o){
	*o = *i+100 ;
	printf("f2(%d) returns (%d)\n",*i,*o) ;

}

void Externc__act_step (int *x){
	printf("Actuator: Value of x = %d\n",*x );
}

