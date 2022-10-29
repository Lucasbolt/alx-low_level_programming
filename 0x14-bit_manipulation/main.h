#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
int _putchar(char n);
int get_bit(unsigned int long n, unsigned int index);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
#endif
