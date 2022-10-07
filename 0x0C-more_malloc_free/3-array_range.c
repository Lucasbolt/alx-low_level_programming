#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates array of integers from @min to @max(include)
 * @min: min value of array
 * @max: max value of array
 * Return: return pointer to array on success, else, NULL
 */
int *array_range(int min, int max)
{
	int *ptr, index;

	if (min > max)
		return (NULL);

	ptr = malloc((1 + max - min) * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (index = 0; index <= (1 + max - min); index++)
	{
		ptr[index] = min++;
	}
	return (ptr);
}
