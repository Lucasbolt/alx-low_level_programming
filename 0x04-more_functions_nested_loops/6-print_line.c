#include "main.h"

/**
 * print_line - prints 'n' number of lines
 * @n: input number of lines
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
