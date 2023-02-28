#include "main.h"

/**
 * swap_int - swaps two int pointers
 * Description: uses printf function
 * @a: an int pointer parameter
 * @b: an int pointer parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
