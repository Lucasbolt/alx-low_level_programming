#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string input
 */
void puts_half(char *str)
{
	int c = 0, i = 0;

	while (str[i++])
		c++;
	c = c / 2;

	for (i = 0; i <= c; i++)
		_putchar(str[i]);
	_putchar('\n');
}
