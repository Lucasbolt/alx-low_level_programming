#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 in a loop of 10
 */
void more_numbers(void)
{
	int count, n;

	for (count = 1; count <= 10; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
