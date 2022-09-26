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
	while (s++)
	{
		if (*s == c)
			return (s);
	}
	return ('\0');
}
