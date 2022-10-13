#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the main calc function
 * @argc: arg counter
 * @argv: arg variables
 * Return: 0 on success,
 *	any other num if error occurs
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	int answer, a, b;
	char *operand;
	int (*op)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	a = atoi(argv[1]);
	operand = argv[2];
	b = atoi(argv[3]);

	op = get_op_func(operand);

	if ((*operand == '%' && b == 0) || (*operand == '/' && b == 0))
	{
		puts("Error");
		exit(100);
	}

	if (op == NULL)
	{
		puts("Error");
		exit(99);
	}

	answer = op(a, b);

	printf("%d\n", answer);

	return (0);
}
