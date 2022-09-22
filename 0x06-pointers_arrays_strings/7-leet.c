#include "main.h"
#include <stdio.h>

/**
 * leet - encodes stringd into 1337
 * @a: string input
 * Return: returns @a pointer
 */
char *leet(char *a)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (a[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (a[index1] == leet[index2] ||
			    a[index1] - 32 == leet[index2])
				a[index1] = index2 + '0';
		}

		index1++;
	}

	return (a);
}

