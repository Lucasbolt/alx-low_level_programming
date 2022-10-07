#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of element of the array
 * @size: size of each element
 * Return: void pointer to new mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int index;
	char *put;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	put = ptr;
	for (index = 0; index < (nmemb * size); index++)
		put[index] = '\0';
	return (ptr);
}
