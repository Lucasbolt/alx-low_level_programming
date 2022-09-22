#include "main.h"
#include <stdio.h>

/**
 * _strncpy - replaces [0-n] characters of @dest arrays with [0-n] characters of @src
 * @dest: first input - destination array
 * @src: second input - src array
 * @n: max number of characters to copy
 * Return: returns @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, count = 0;

	while(src[index++])
		count++;

	for (index = 0;src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = count; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
