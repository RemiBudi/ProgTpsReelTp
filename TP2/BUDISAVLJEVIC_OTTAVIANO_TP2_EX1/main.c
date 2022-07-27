#include "rcounter_c/rcounter.h"
#include <stdbool.h>
#include <stdio.h>

int main() {
	int cnt;
	int rst;
	bool b;
	Rcounter__rcounter_mem mem ;
	Rcounter__rcounter_reset(&mem);
	for(;;){
		while(rst != 0 && rst!=1){
			scanf("%d", &rst);

			
			if(rst!=0 && rst!=1) printf("0 ou 1\n");
			
		}
		if(rst==0) b = false;
		if(rst==1) b = true;
		
		Rcounter__rcounter_step(&b, &cnt,&mem);
		printf("Counter: %d\n",cnt);
		
		rst=-1;
	}
	return 0;
}
	
