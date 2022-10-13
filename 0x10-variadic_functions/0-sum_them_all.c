#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - performs addition operation on variable args
 * @n: args counter
 * Return: returns the sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int sum = 0;

	va_list ap;
	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
