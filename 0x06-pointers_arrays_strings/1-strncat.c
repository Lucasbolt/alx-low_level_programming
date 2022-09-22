#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates @src to @dest with at most @n character from @src
 * @dest: first input and destination string
 * @src: second input and source string
 * @n: max number of @src characters to concatenate
 * Return: returns a pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, index = 0;

	while (dest[index++])
		count++;

	for (index = 0; src[index] && index < n; index++)
	{
		dest[count++] = src[index];
	}
	return (dest);
}
