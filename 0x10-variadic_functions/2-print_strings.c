#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints variable num of string args
 * @separator: print separator
 * @n: number of args to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t count;
	char *str;
	int i;
	va_list ap;

	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("nil");
		else
		{
			for (i = 0; str[i]; i++)
				putchar(str[i]);
		}

		if (separator != NULL && count < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
