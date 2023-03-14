#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - create arrray of char
 * Description: uses printf function
 * @size: an unsigned int parameter
 * @c: a char parameter
 * Return: array pointer and NULL if otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(size * sizeof(c));

	if (ptr == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
