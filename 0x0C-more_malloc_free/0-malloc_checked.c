#include "main.h"


/**
 * malloc_checked - allocates memory
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(sizeof(b));
	if (!x)
		exit(98);
	return (x);
}
