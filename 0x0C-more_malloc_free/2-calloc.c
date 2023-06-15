#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *c;

	if (!nmemb || !size)
		return (NULL);

	c = malloc(size * nmemb * sizeof(int));
	if (!c)
		return (NULL);

	memset(c, 0, nmemb);
	return (c);
}
