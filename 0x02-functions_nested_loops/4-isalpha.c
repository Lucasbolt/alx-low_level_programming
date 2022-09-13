#include "main.h"

/**
 * _islower - checks is alphabet is lowercase
 * @c: takes a single character argument
 * Return: returns 1 if true, 0 if false
 */
int _islower(int c)
{
	if ((c >= 65) && (c <= 122))
		return (1);
	else
		return (0);
}
