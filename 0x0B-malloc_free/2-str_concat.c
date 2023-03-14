#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concat two string
 * @s1: a char pointer parameter
 * @s2: a char pointer parameter
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len1, len2;
	char *ptr;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = *s1++;
	for (i = 0; i < len2; i++)
		ptr[len1 + i] = *s2++;
	*(ptr + len1 + len2 + 1) = '\0';
	return (ptr);
}
