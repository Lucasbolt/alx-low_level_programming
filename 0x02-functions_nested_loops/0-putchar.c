#include "main.h"

/**
 * main - prints charachters using _putchar function
 * Return: returns 0 on success
 */
int main(void)
{
	char *myvar = "_putchar";
	while (*myvar)
		_putchar(*myvar++);
	_putchar('\n');
	return (0);
}
