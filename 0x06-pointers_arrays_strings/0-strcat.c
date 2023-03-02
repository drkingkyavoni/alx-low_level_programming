#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * Description: uses pointers
 * @dest: a char pointer parameter
 * @src: a char pointer parameter
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
