#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the right function to call
 * @s: operator to call
 * Return: returns the pointer to the desired func
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
