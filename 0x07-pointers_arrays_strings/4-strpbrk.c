#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * Description: uses pointers
 * @s: a char pointer parameter
 * @accept: a char parameter
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
