#include "main.h"
#include <stdlib.h>

/**
* free_grid - setting the grid free
* @grid: int pointer
* @height: int
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
