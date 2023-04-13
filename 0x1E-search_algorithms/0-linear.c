#include "search_algos.h"

/**
  * linear_search - Looks for a value in an array
  *                 of integers using linear search.
  * @array: A pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: The value to look for.
  *
  * Return: -1, if the value is not present or it is null
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}

	return (-1);
}
