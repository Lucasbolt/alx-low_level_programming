#include "main.h"
#include <stdio.h>

/**
 * prime - checks for prime number
 * @n: number to check for
 * @c: counter
 * Return: returns 1 if true, else, 0
 */
int prime(int n, int c)
{
	if (c == 1)
		return (1);
	if (n % c == 0)
		return (0);
	return (prime(n, c - 1));
}
/**
 * is_prime_number - checks if @n is a prime number
 * @n: integer to be checked
 * Return: returns 1 if true, else, 0
 */
int is_prime_number(int n)
{
	int count = n;

	if (n < 1)
		return (0);
	else if (n == 1)
		return (0);
	return (prime(n, count - 1));
}
