#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * str_concat - concat two string
 * @s1: a char pointer parameter
 * @s2: a char pointer parameter
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2 = 0;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
		*s1 = '\0'; 
	if (s2 == NULL)
		*s2 = '\0';

	ptr = malloc((len1 + len2 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	memcpy(ptr, s1, len1);
	memcpy(ptr + len1, s2, len2);
	return (ptr);
}
