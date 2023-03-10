#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings with buffer size
 * Description: uses pointers
 * @dest: a char pointer parameter
 * @src: a char pointer parameter
 * @n: an int parameter
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
