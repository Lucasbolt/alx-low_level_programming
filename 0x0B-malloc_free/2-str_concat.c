#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - allocate enought memory to concatenate @s1 and @s2
 * @s1: string 1
 * @s2: string 2
 * Return: returns pointer to the new allocated mem
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = strlen(s1);
	b = strlen(s2);

	p = (char *) malloc((a + b + 1) * sizeof(char));

	if (p)
	{
		for (c = 0; c < a; c++)
		{
			p[c] = s1[c];
		}

		for (d = 0; c < (a + b); c++)
		{
			p[c] = s2[d];
			d++;
		}
		p[c] = '\0';
	}
	return (p);
}
