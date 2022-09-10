#include <stdio.h>

/**
 * main - print combination of digits
 * Return: returns 0 on success
 */
int main(void)
{
	int a;

	for (a = 0; a <= 7; a++)
	{
		int b;

		for (b = a + 1; b <= 8; b++)
		{
			int c;

			for (c = b + 1; c <= 9; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');
				if (!((a == 7) && (b == 8) && (c == 9)))
				{
					putchar(',');
					putchar(' ');
				}


			}
		}
	}
	putchar('\n');
	return (0);
}
