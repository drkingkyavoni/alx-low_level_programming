#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* max bits in long int is 64 bits */
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

