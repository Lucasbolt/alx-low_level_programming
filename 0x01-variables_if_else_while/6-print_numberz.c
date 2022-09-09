#include <stdio.h>

/**
 * main - print numbers
 * Return: returns 0 on success
 */
int main(void)
{
	int c = 1;

	for (; c < 10; c++)
		putchar((c % 10) + '0');
	putchar('\n');
	return (0);
}
