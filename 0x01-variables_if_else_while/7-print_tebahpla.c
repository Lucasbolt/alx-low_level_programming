#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabets
 * Description: print in reverse
 * Return: returns 0 on success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
