#include "main.h"

/**
 * _memset - set the n bytes of memory to a constant byte
 * @s: pointer array
 * @b: character byte
 * @n: n bytes of memory
 * Return: returns pointer to @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
