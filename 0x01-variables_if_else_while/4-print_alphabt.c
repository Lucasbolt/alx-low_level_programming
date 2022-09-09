#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabets
 * Return: returns 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ( c == 'e' || 'q' )
			c++;
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
