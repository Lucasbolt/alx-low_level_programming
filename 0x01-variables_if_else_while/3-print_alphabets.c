#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabets
 * Return: returns 0 on success
 */
int main(void)
{
	char c = 'a';

	char a` = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
