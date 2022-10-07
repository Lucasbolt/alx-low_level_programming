#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to @old_mem address
 * @old_size: old size of allocated memory
 * @new_size: new size to be allocated
 * Return: returns void pointer to new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *point, *put;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
			return (new_ptr);
		else
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	point = ptr;
	put = malloc(new_size);
	new_ptr = put;

	for (index = 0; index < old_size && index < new_size; index++)
		put[index] = point[index];
	free(ptr);
	return (new_ptr);
}
