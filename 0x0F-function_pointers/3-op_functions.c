#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);

/**
 * op_add - performs addition
 * @a: input a
 * @b: input b
 * Return: return the sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_div - performs division of two integers
 * @a: numerator
 * @b: divisor
 * Return: returns the quotient of @a and @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - perfoms multiplication of two integers
 * @a: input a
 * @b: input b
 * Return: returns the product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_sub - performs subtraction of two integers
 * @a: input a
 * @b: input b
 * Return: returns the difference of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mod - performs modulo operation
 * @a: numerator
 * @b: denominator
 * Return: returns the remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
