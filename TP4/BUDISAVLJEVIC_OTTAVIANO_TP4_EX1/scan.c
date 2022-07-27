#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "scan.h"


void Scan__scanSize_step(int*n){
	int p=0;
	*n=0;
		printf("Calcul de fft\n");
		while((p!=8)&&(p!=16)){
			printf("Entrez taille du vecteur (8 ou 16)");
			scanf("%d",&p);	
		}
		*n=p;
		printf("\n\n");
		
	}
	
void Scan__scanVect8_step(Typecomplex__complex*o){
	for (int i=0; i<8; i++){
		printf("[%d]-Real part\n", i);
		scanf("%f",&o[i].re);
		printf("[%d]-Imaginary part\n", i);
		scanf("%f",&o[i].im);
	}	
}

void Scan__scanVect16_step(Typecomplex__complex*o){
	for (int i=0; i<16; i++){
		printf("[%d]-Real part\n", i);
		scanf("%f",&o[i].re);
		printf("[%d]-Imaginary part\n", i);
		scanf("%f",&o[i].im);
	}	
}
