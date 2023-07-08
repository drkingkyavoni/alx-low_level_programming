#include "main.h"
#include <stddef.h>

/**
 * count_set_bits - count set bits
 * @n: unsigned long int
 * Return: unsigned int
 */

unsigned int count_set_bits(unsigned long int n)
{
	if (n == 0)
		return (0);
	return (((n & 1) ? 1 : 0) + count_set_bits(n >> 1));
}

/**
  * flip_bits - function to count flipped bits
  * @n: unsigned long int
  * @m: unsigned long int
  * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* if n is eq to m, return 0 */
	if (n == m)
		return (0);
	/* n exclusive m */
	n ^= m;
	/* count number of set bits */
	return (count_set_bits(n));
}

