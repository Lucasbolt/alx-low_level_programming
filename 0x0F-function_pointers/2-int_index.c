#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - compares elements of array with a given func
 * @array: array containing elements
 * @size: size of array
 * @cmp: function to be used
 * Return: returns index of element that returns true
 *	-1 if none matches or error occured
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		a = cmp(array[i]);
		if (a > 0)
			return (i);
	}
	return (-1);
}
