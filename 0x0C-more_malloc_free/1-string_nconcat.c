#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates @s1 and @n bytes of @s2
 * @s1: string to conctenate to
 * @s2: string to concatenate
 * @n: n bytes of @s2
 * Return: return pointer to the newly concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int size_a, index;
	unsigned int count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
	{
		ptr = "";
		return (ptr);
	}
	size_a = strlen(s1);
	if (n >= strlen(s2))
	{
		n = strlen(s2);
		size_a += strlen(s2);
	}

	else
		size_a += n;

	ptr = malloc((size_a + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
	{
		ptr[index] = s1[index];
	}
	for (count = 0; count < n; count++)
	{
		ptr[index] = s2[count];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);

}
