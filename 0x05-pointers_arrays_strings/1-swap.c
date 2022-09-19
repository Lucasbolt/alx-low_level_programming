#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap variables a and b
 * @a: first input
 * @b: second input
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
