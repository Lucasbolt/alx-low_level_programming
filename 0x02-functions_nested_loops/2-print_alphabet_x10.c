#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet into 10 places
 */
void print_alphabet_x10(void)
{
	int count = 1;

	void print(void)
	{
		int c = 'a';
		while (c <= 'z')
			_putchar(c++);
	}

	while (count <= 10)
	{
		print();
		_putchar('\n');
		count++;
	}
}
