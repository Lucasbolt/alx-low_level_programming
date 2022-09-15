#include "main.h"

/**
 * _isupper - checks if input is uppercase
 * @c: input char
 * Return: returns 1 if true else 0
 */
int _isupper(int c)
{
	int i = 0;

	if (c >= 65 && c <= 90)
		i = 1;

	return (i);
}
