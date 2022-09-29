#include "main.h"
#include <stdio.h>

/**
 * getLen - get length of string @s
 * @s: string pointer
 * Return: returns length of string
 */
int getLen(char *s)
{
	if (*s)
		return (1 + getLen(s + 1));
	else
		return (0);
}

/**
 * cmp - checks if string is a palindrome
 * @s: string to check
 * @a: increasing index
 * @b: decreasing index
 * Return: return 1 if true, else returns 0
 */
int cmp(char *s, int a, int b)
{
	if (b < 0)
		return (1);
	if (s[a] != s[b])
		return (0);
	return (cmp(s, a + 1, b - 1));
}

/**
 * is_palindrome - returns result of cmp
 * @s: string to check
 * Return: returns  1 if true, else 0
 */
int is_palindrome(char *s)
{
	int b;
	int a = 0;

	b = getLen(s);
	return (cmp(s, a, b - 1));
}
