#include <stdio.h>

/**
 * main - print combination of two digits
 * Return: returns 0 on success
 */
int main(void)
{
	int b;
	int c;

	for (; b <= 8; b++)
	{
		for (c = b + 1; c <= 9; c++)
		{
			putchar((b % 10) + '0');
			putchar((c % 10) + '0');
			if (!((c == 9) && (b == 8)))
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}

