#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes of mem from @src to @dest
 * @dest: destination array
 * @src: source array
 * @n: n bytes
 * Return: @dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
