#include "main.h"

/**
 * _strstr - finds the first occurrence of substring @needle
 *	in the string @haystack
 * @haystack: main string
 * @needle: strings to search for
 * Return: returns a pointer to the beginning of the located
 *	substring or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int index1;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index1 = 0;

		if (haystack[index1] == needle[index1])
		{
			do {
				if (needle[index1 + 1] == '\0')
					return (haystack);
				index1++;
			} while (haystack[index1] == needle[index1]);
		}
		haystack++;
	}
	return ('\0');
}
