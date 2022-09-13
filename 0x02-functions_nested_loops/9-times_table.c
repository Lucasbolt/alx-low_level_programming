#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the multiplication table
 */
void times_table(void)
{
	int count = 0;
	
	for (; count <= 9; count++)
	{
		int t[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		int c = 0;

		for (; c <= 9; c++)
		{
			int n = count * t[c];

			if (n < 10)
			{
				if (c == 9)
				{
					printf("%d\n", n);
					continue;
				}
				printf("%d,  ", n);
				continue;
			}
			if (c == 9)
			{
				printf("%d\n", n);
				continue;
			}
			printf("%d, ", n);
		}

	}
}
