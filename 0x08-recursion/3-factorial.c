#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of a number
 * @n: integer input
 * Return: returns -1 n is less than 0
 *	returns 1 if n = 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
