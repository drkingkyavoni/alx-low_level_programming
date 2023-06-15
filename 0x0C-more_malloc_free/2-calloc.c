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
	void *c;

	if (!nmemb || !size)
		return (NULL);

	c = malloc(size * nmemb);
	if (!c)
		return (NULL);

	memset(c, 0, nmemb);
	return (c);
}
