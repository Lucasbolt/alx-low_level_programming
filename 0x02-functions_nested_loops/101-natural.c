#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of numbers divisible by 3 and 5 betweem 0 and 1024
 */
int main(void)
{
	int num = 1024;
	int sum = 0;

	for (; num >= 0; num--)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
			sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
