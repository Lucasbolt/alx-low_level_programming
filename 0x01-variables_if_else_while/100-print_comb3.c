#include <stdio.h>

/**
 * main - print combination of two digits
 * Return: returns 0 on success
 */
int main(void)
{
	int b = 0;

	for (; b <= 8; b++)
	{
		int c = 0;

		for (; c <= 9; c++)
		{
			putchar((b % 10) + '0');
			putchar((c % 10) + '0');
			if (!((c == 9) && (b == 8)))
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}

