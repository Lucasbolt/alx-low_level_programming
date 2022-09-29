#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - return @x to the power of @y
 * @x: base integer
 * @y: exponent integer
 * Return: returns -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	i *= _pow_recursion(x, y - 1);

	return (i);
}
