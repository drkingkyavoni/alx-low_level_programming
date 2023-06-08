#include "main.h"

/**
 * _strlen - check the string length
 * @s: char pointer
 * Return: char pointer
 */
char *_strlen(char *s)
{
	if (*s == '\0')
		return (s);
	return (_strlen(s + 1));
}

/**
 * _strlen_recursion - check the string length recursively
 * @s: char pointer
 * Return: int
 */
int _strlen_recursion(char *s)
{
	char *first = s;

	if (s == NULL)
		return (0);
	return ((int)(_strlen(s) - first));
}
