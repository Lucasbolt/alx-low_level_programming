#include "main.h"

/**
 * print_binary - converts integer to binary
 * @n: integer
 */
void print_binary(unsigned long int n)
{
	int b[32];
	int index = 0;
	if (n == 0)
	{
		printf("%i\n", 0);
		return;
	}

	while (n)
	{
		if (n == 0)
			break;
		b[index] = n % 2;
		n = n / 2;
		index++;
	}
    index--;
	for (; index >= 0; index--)
		printf("%i", b[index]);
	printf("\n");
}
