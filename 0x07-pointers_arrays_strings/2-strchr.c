#include "main.h"
#include <stdio.h>

/**
 * _strchr - returns pointer to the first occurence of character
 * @s: source array
 * @c: string character
 * Return: returns pointer to the first occurence
 *	else, returns NULL.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}

