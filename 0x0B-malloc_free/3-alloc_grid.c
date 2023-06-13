#include "main.h"
#include "string.h"
#include "stddef.h"
#include "stdlib.h"

int **g, i;

/**
* alloc_grid - create a 2D array of integers
* @width: int
* @height: int
* Return: int
*/
int **alloc_grid(int width, int height)
{

	if ((width <= 0) || (height <= 0))
		return (NULL);

	g = (int **)malloc(sizeof(int *) * height);

	if (!g)
	{
		free(g);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		g[i] = (int *)malloc(sizeof(int) * width);
		if (!g[i])
		{
			while (i >= 0)
				free(g[i--]);
			free(g);
			return (NULL);
		}
		memset(g[i], 0, sizeof(int) * width);
	}

	return (g);
}
