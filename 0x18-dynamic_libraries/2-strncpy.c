#include "main.h"
#include <string.h>

/**
 * _strncpy - copies two strings with buffer size
 * Description: uses pointers
 * @dest: a char pointer parameter
 * @src: a char pointer parameter
 * @n: an int parameter
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
