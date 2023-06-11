#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * Description: uses pointers
 * @s: a char pointer parameter
 * @accept: a char parameter
 * Return: char
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
