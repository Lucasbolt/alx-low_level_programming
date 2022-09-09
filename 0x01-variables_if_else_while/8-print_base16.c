#include <stdio.h>

/**
 * main - print base 16
 * Return: returns 0 on success
 */
int main(void)
{
	int c = 'a';

	int b = 0;

	for (; b <= 9; b++)
		putchar((b % 10) + '0');
	for (; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
