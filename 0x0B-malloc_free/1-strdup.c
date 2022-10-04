#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - allocate memory size of @str and copy @str into it.
 * @str: string to be copied
 * Return: return pointer to copied strin
 *	returns NULL if failed.
 */
char *_strdup(char *str)
{
	int c, i;
	char *p;

	c = strlen(str);

	p = (char *) malloc((c + 1) * sizeof(char));

	if (!str)
		return (NULL);
	if (p != NULL)
	{
		for (i = 0; i < c; i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
}
