#include "main.h"
#include <stdio.h>

/**
 * main - prints number of inputed arguments
 * @argc: arg counter
 * @argv: pointer array
 * Return: returns 0 on success
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
