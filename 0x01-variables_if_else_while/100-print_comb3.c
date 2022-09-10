#include <stdio.h>

/**
 * main - print combination of two digits
 * Return: returns 0 on success
 */
int main(void)
{
	for (int b = 0; b <= 8; b++)
	{
		for (int c = 0; c <= 9; c++)
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

