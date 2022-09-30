#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers entered on the commandline
 * @argc: counter
 * @argv: pointer array
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	int num, c, b, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (c = 1; c < argc; c++)
	{
		for (b = 0; argv[c][b]; b++)
		{
			if (argv[c][b] < '0' || argv[c][b] > '9')
			{
				puts("Error");
				return (1);
			}
		}
		num = atoi(argv[c]);
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
