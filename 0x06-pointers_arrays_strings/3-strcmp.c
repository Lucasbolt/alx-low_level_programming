#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first input str
 * @s2: second input str
 * Return: -ve if s1 < s2.
 *	+v if s1 > s2.
 *	0 if s1 == s2.
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
