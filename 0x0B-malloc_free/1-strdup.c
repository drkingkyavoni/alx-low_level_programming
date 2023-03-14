#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strdup - create a string duplicate
 * @str: a char parameter
 * Return: char pointer and NULL if otherwise
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	return (strdup(str));
}
