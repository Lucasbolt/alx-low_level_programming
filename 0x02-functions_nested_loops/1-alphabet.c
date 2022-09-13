#include "main.h"

/**
 * main - prints out the lowercase alphabet
 * Return: returns 0 on success
 */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return (0);
}
