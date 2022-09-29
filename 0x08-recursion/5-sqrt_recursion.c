#include "main.h"
#include <stdio.h>

/**
 * sqt - returns natural sqrt a number
 * @n: input integer
 * @root: valid root
 * Return: returns -1 if @n has no natural sqrt
 */

int sqt(int n, int root)
{
	if ((root * root) == n)
		return (root);
	if (root == n / 2)
		return (-1);
	return (sqt(n, root + 1));
}

/**
 * _sqrt_recursion - returns natural sqrt of a number
 * @n: input integer
 * Return: returns root of @n
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (sqt(n, root));


}
