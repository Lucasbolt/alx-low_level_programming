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
	while (*dest != '\0')
		dest++;
	int count = 0;

	while (*src != '\0')
	{
		dest[count] = *src;
		count++;
		src++;
	}
	dest[count] = '\0';
	return (dest);
}
