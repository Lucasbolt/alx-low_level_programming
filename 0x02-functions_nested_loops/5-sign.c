#include "main.h"

/**
 * print_sign - checks the signs of numbers
 * @n: takes a number as argument
 * Return: returns 1 if true, 0 if false and prints the sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
