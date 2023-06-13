#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of chars
 * @size: unsigned int
 * @c: char
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *charray;

	if (size == 0)
		return (NULL);

	charray = malloc(sizeof(char) * size);
	if (!charray)
		return (NULL);

	memset(charray, c, sizeof(char) * size);
	return (charray);
}
