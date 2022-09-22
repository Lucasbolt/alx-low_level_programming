#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses array
 * @a: number array pointer
 * @n: number of array
 */
void reverse_array(int *a, int n)
{
	int b[98];
	int count, len = n;

	n = n - 1;

	for (count = 0; count < len; count++)
		b[count] = a[n--];

	for (count = 0; count < len; count++)
		a[count] = b[count];

}
