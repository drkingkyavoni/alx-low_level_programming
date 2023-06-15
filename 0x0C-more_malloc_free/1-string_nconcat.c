#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: char pointer
 * @s2: char pointer
 * @n: unsigned int
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;
	unsigned int s, t;

	s = 0, t = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	s = strlen(s1);
	t = strnlen(s2, n);
	temp = malloc(sizeof(char) * (s + t + 1));
	if (!temp)
		return (NULL);

	memcpy(temp, s1, s);
	memcpy(temp + s, s2, t);
	*(temp + s + t) = '\0';
	return (temp);
}

