#ifndef PRINT_H
#define PRINT_H

#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "typecomplex.h"


void Print__print_complex_step(Typecomplex__complex*o);

void Print__printVector8_step(Typecomplex__complex o[8]);
void Print__printVector16_step(Typecomplex__complex o[16]);

 		

#endif
