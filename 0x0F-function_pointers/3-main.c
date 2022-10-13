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
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	operand = argv[2];
	b = atoi(argv[3]);

	op = get_op_func(operand);

	if (op == NULL || operand[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operand == '/'  && b == 0) || (*operand == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	answer = op(a, b);

	printf("%d\n", answer);

	return (0);
}
