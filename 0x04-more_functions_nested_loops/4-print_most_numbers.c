#include "main.h"

/**
 * print_most_numbers - prints digits from 0-9
 */
void print_most_numbers(void)
{
	int c = 48;

	for (; c <= 57; c++)
	{
		if (c == 50 || c == 52)
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
