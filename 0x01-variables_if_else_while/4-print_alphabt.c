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
			putchar(c++);
		else if (c == 'q')
			putchar(c++);
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}
