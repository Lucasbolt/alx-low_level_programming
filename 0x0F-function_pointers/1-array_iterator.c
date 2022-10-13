#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - performs an operation on each element
 *	of the array with a given function
 * @array: array containing the elements
 * @size: size of elements to perform on
 * @action: function to call
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
