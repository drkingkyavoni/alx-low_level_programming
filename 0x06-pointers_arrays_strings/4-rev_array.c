#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - reverse_arrayconcatenates two strings
 * Description: uses pointers
 * @a: an int pointer array parameter
 * @n: an int parameter
 * Return: char
 */

void reverse_array(int *a, int n)
{
	int b[15];
	int i = 0;

	while (i < n)
	{
		b[i] = *a;
		i++;
		a--;
	}

	putchar('0' + i + '0');

	while (i < n)
	{
		*a = b[i];
		a++;
		i++;
	}
}
