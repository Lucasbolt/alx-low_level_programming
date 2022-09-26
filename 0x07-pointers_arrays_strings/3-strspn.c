#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial
 *	segment of @s which only consists of bytes from @accept
 * @s: main segment
 * @accept: bytes to check for
 * Return: returns number of occurence
 */
unsigned int _strspn(char *s, char *accept)
{
	int index1, index2;
	unsigned int count = 0;

	for (index1 = 0; s[index1] != ' '; index1++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (s[index1] == accept[index2])
				count++;
		}
	}
	return (count);
}
