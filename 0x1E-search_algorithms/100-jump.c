#include "search_algos.h"

/**
  * jump_search - looks for a value in a sorted array
  *               of integers using the jump search method.
  * @array: a pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1, if the value is not present or array is null.
  *         otherwise, the first index where the value is located.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, stp;

	if (array == NULL || size == 0)
		return (-1);

	stp = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += stp;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
