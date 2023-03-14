#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - pointer to a 2D grid
 * @grid: an int pointer parameter
 * @height: an int parameter
 * Return: int pointer
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
