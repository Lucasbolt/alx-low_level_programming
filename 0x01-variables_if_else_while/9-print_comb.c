#include <stdio.h>

/**
 * main - print combination
 * Return: returns 0 on success
 */
int main(void)
{
	int c = 0;

	for (; c < 9; c++)
	{
		putchar((c % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar((9 % 10) + '0');
	return (0);
}
