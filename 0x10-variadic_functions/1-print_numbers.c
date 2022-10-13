#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers entered as args
 * @separator: string / char separating each printed args
 * @n: number of args to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;

	va_start(ap, n);
	
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && count < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
