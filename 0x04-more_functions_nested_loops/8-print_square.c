#include "main.h"

/**
 * print_square - prints square
 * @n: size of square
 */
void print_square(int n)
{
	int m = n;

	if (n <= 0)
		_putchar('\n');

	for (; n > 0; n--)
	{
		int k = m;

		for (; k > 0; k--)
			_putchar('#');
		_putchar('\n');
	}
}
