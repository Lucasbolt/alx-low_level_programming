#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program when run
 * @argc: arg count
 * @argv: string pointer array
 * Return: returns 0 on success
 */
int main(int argc, char **argv)
{
	if (argc >= 1)
		printf("%s\n", *argv);
	return (0);
}
