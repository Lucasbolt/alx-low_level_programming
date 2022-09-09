#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabets
 * Return: returns 0 on success
 */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		if (c == 'e')
			continue;
		else if (c == 'q')
			continue;
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}
