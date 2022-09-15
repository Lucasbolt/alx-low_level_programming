#include <stdio.h>

/**
 * main - replace multiples of 3 and 5 with words
 * Return: returns 0 on success
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if ((c % 3 == 0) && (c % 5 == 0))
			printf("FizzBuzz");

		else if (c % 3 == 0)
			printf("Fizz");

		else if (c % 5 == 0)
			printf("Buzz");
		else
			printf("%d", c);
		if (!(c == 100))
			printf(" ");
	}
	printf("\n");
	return (0);
}

