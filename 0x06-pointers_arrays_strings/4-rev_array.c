#include "main.h"

/**
 * reverse_array - reverse the int array
 * Description: uses pointers
 * @a: an int pointer array parameter
 * @n: an int parameter
 * Return: char
 */

void reverse_array(int *a, int n)
{
	int i, j = 0;

	while (i < n / 2)
	{
		j = *(a + i);
		*(a + i) = *(a + n - i);
		*(a + n - i) = j;
		i++;
		n--;
	}
}
