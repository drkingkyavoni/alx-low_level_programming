#include "main.h"
#include <string.h>

/**
 * _strchr - locate a character in a string
 * Description: uses pointers
 * @s: a char pointer parameter
 * @c: a char parameter
 * Return: char
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
