#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the length of a str
 * @s: takes a string as an input
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s++)
		count++;
	printf("count = %d\n", count);
	return (count);
}
