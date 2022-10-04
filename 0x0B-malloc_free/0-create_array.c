#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates array of @size and initializes with @c
 * @size: array size
 * @c: charact to initialize
 * Return: return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(size * sizeof(char));

	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p);

}
