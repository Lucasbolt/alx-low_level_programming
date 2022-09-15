#include "main.h"

/**
 * _isdigit - checks if input is digit
 * @c: input char
 * Return: returns 1 if true else 0
 */
int _isdigit(int c)
{
	int i = 0;

	if (c >= 48 && c <= 57)
		i = 1;

	return (i);
}
