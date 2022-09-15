#include "main.h"

/**
 * print_diagonal - print diagonal lines
 * @n: number of diagonal lines
 */
void print_diagonal(int n)
{
	int c = 0;

	if (n <= 0)
		_putchar('\n');

	while (n > 0)
	{
		c++;
		int a = c;

		while (a > 0)
		{
			_putchar(' ');
			a--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
