#include <stdio.h>

/**
 * main - prints out commandline args
 * @argc: arg counter
 * @argv: pointer array
 * Return: returns 0 if successful
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
