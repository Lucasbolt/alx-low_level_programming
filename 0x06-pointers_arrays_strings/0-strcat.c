#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates the two string inputs
 * @dest: input string one (the destination)
 * @src: input string two (the source)
 * Return: returns a *dest with the final result
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int index = 0;

	while (dest[index++])
	{
		count++;
	}

	for (index = 0; src[index]; index++)
		dest[count++] = src[index];
	return (dest);
}
