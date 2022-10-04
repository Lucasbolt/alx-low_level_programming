#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate args
 * @ac: args counter
 * @av: args array
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int c, a, b, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (c = 0; c < ac; c++)
	{
		for (b = 0; av[c][b]; b++)
			size++;
	}

	p = malloc((size + 1) * sizeof(char));

	if (p)
	{
		b = 0;
		for (c = 0; c < ac; c++)
		{
			for (a = 0; av[c][a]; a++)
				p[b++] = av[c][a];
			p[b++] = '\n';
		}
		p[size] = '\0';
	}
	return (p);
}
