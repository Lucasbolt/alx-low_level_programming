#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the
 *	string @s of any bytes in the string @accept
 * @s: main array
 * @accept: bytes to search for
 * Return: returns a pointer to the byte in s that matches one of the
 *	bytes in accept, or NULL if no such bytes is found
 */
char *_strpbrk(char *s, char *accept)
{
	int index1, index2;

	for (index1 = 0; s[index1]; index1++)
	{
		for (index2 = 0; accept[index2]; index2++)
		{
			if (s[index1] == accept[index2])
				return (s + index1);
		}
	}
	return ('\0');
}
