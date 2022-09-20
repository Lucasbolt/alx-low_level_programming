#include "main.h"

/**
 * puts2 - Prints one char while skipping others (+2).
 * @str: string input.
 */
void puts2(char *str)
{
	int i = 0, c = 0;

	while (str[i++])
		c++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
