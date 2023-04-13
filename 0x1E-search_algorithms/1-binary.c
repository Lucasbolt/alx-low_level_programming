#include "search_algos.h"

/**
  * binary_search - searches for a value in a sorted array
  *                 of integers using binary search method.
  * @array: a pointer to the first element of the array to search.
  * @size: the number of elements in the array.
  * @value: value to search for.
  *
  * Return: -1, the value is not present or pointer is null.
  *         otherwise, the index where the value is located.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, lf, rt;

	if (array == NULL)
		return (-1);

	for (lf = 0, rt = size - 1; rt >= lf;)
	{
		printf("Searching in array: ");
		for (i = lf; i < rt; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = lf + (rt - lf) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rt = i - 1;
		else
			lf = i + 1;
	}
	return (-1);
}
