#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts strings to upper case
 * @a - string array
 * Return: returns @a
 */
char *string_toupper(char *a)
{
	int index = 0;

	while (a[index])
	{
		if (a[index] >= 97 && a[index] <= 122)
			a[index] = a[index] - 32;
		index++;
	}
	return (a);
}
