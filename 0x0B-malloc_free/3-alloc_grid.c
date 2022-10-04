#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocate mem for 2-dimensional array
 * @width: width of array
 * @height: height of array
 * Return: return pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int a, b;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (p)
	{
		for (a = 0; a < height; a++)
		{
			p[a] = malloc(sizeof(int) * width);
			
			if (p[a] == NULL)
			{
				for (; a >= 0; a--)
					free(p[a]);
				free(p);
				return (NULL);
			}
		}

		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
				p[a][b] = 0;
		}
	}
	return (p);
}
