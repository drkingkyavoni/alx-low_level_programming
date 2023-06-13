#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - creates a copy of an input string
 * @str: char pointer
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *s, *temp;
	int size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; ++size)
		;
	temp = malloc(sizeof(char) * (size + 1));

	if (!temp)
		return (NULL);
	
	s = temp;
	memmove(temp, str, size);
	*(temp + size) = '\0';

	return (s);
}
