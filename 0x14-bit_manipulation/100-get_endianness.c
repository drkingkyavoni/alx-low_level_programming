#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: int
 */

int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *)&i;
	return ((int)*c);
}

