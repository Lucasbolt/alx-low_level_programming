#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two integers
 * @argc: arg counter
 * @argv: pointer array
 * Return: 0 if successful, else 1
 */
int main(int argc, char **argv)
{
	int p, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		p = a * b;
		printf("%d\n", p);
	}
	else
	{
		puts("Error");
		return (1);
	}
	return (0);
}
