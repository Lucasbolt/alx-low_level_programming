#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @str: string input
 */
void print_rev(char *str)
{
	int c = 0, i = 0;

	while (str[i++])
		c++;

	for (i = c - 1; i >= 0; i--)
		_putchar(str[i]);

	_putchar('\n');
}
