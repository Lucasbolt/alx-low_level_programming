#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns natural sqrt a number
 * @n: input integer
 * Return: returns -1 if @n has no natural sqrt
 */
int _sqrt_recursion(int n)
{
	int root = 1;
	int i = 1;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	while (i)
	{
		if ((root * root) == n)
			return (root);
		if (root == n / 2)
			return (-1);
		root++;
	}
	return (root);


}
