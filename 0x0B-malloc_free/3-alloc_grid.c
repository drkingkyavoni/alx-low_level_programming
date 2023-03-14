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
	int **ptr, i, j;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = malloc(height * width * sizeof(int *) + 1);
	if (ptr == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < width * height; i++)
			**(ptr + i) = 0;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			printf("%d ", *ptr[i * width + j]);
		printf("\n");
	}
	return (ptr);
}
