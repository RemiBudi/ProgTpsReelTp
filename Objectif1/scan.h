#ifndef SCAN_H
#define SCAN_H

#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include "typecomplex.h"


void Scan__scanSize_step(int*n);
void Scan__scanVect8_step(Typecomplex__complex*o);
void Scan__scanVect16_step(Typecomplex__complex*o);

#endif
