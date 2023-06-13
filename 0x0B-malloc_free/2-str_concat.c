#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: char pointer
 * @s2: char pointer
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *temp;
	int size1, size2;

	if (!s1 || !s2)
		return ('\0');

	for (size1 = 0; s1[size1] != '\0'; ++size1)
		;
	for (size2 = 0; s2[size2] != '\0'; ++size2)
		;
	temp = malloc(sizeof(char) * (size1 + size2 + 1));
	if (!temp)
		return (NULL);

	memmove(temp, s1, size1);
	memmove(temp + size1, s2, size2 + 1);

	return (temp);
}
