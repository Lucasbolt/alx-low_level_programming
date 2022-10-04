#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2D array from memory
 * @grid: array to free up
 * @height: height of array
 */
void free_grid(int **grid, height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
