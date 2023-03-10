#include "main.h"
#include <string.h>

/**
 * _memcpy - fills memory with a constant byte
 * Description: uses pointers
 * @dest: a char pointer parameter
 * @src: a char pointer parameter
 * @n: a unsigned int parameter
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
