#include "main.h"

/**
 * print_last_digit -returns the last digit as output
 * @n: takes an integer argument
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
