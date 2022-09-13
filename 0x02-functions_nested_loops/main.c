#include "main.h"
#include <stdio.h>

/**
 * main - test my program
 * Return: returns 0 on success
 */
int main(void)
{
	int r;
	r = print_last_digit(-2147483648);
	printf("%d\n", r);
	return (0);
}
