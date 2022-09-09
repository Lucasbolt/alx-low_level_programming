#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabets
 * Return: returns 0 on success
 */
int main(void)
{
	char c = 'a';

	char c = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
