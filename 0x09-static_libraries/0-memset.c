#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * Description: uses pointers
 * @s: a char pointer parameter
 * @b: a char parameter
 * @n: a unsigned int parameter
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
