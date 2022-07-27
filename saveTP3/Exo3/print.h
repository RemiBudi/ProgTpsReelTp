#ifndef PRINT_H
#define PRINT_H

#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>


void Print__print_f_step(int*x, int*y, int*idx);
void Print__print_gnc_step(int*x, int*y, int*idx);
void Print__print_thermal_step(int*idx);
void Print__print_rien_step();

#endif
