#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers from to 98
 * @n: starting point arg
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				continue;
			}
			printf("%d, ", n);
		}
	}
	else if (n == 98)
		printf("%d\n", n);
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				continue;
			}
			printf("%d, ", n);
		}
	}
}
