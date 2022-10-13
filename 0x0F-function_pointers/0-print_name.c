#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name using the passed in function
 * @name: name to be printed
 * @f: function to call
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
