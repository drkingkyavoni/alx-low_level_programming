#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * Description: uses pointers
 * @a: an int pointer parameter
 * @size: an int parameter
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; ++i)
	{
		sum1 += *(a + i * (size + 1));
		sum2 += *(a + (size - 1) * (i + 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
