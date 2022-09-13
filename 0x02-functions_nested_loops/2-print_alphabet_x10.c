#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet into 10 places
 */
void print_alphabet_x10(void)
{
	int count = 1;
	char c = 'a';

	for (; count <= 10; c++)
	{
		for (; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
