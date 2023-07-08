#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * set_bit - inserts 1 to the bit value at an index
 * @n: unsigned long int pointer
 * @index: unsigned int
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *m;

	/* initialize m to keep replica of n */
	m = malloc(sizeof(unsigned long int) * 8);
	if (m == NULL)
		return (-1);
	/* max bits in long int is 64 bits */
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (n == NULL)
		return (-1);
	*m = *n << index;
	*n = *n | (1 << index);
	return ((m != n) ? 1 : -1);
}

