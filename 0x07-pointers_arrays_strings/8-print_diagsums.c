#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals of
 *	a square matrix of integers
 * @a: array
 * @n: size of array
 */
void print_diagsums(int *a, int n)
{
	int index;
	int diag1 = 0, diag2 = 0;

	for (index = 0; index < n; index++)
	{
		diag1 = diag1 + a[index];
		a += n;
	}
	a -= n;

	for (index = 0; index < n; index++)
	{
		diag2 = diag2 + a[index];
		a = a - n;
	}
	printf("%i, %i\n", diag1, diag2);
}


