#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - pointer to a 2D grid
 * @width: an int parameter
 * @height: an int parameter
 * Return: int pointer
 */

int **alloc_grid(int width, int height)
{
	int **ptr1;
	int *ptr2;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	ptr1 = (int **)malloc(height * sizeof(int *));
	if (ptr1 == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr2 = (int *)malloc(width * sizeof(int));
		if (ptr2 == NULL)
			return (NULL);
		ptr1[i] = ptr2;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr1[i][j] = 0;
	}

	return (ptr1);
}
