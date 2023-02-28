#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copy string from src to dst
 * Description: uses printf function
 * @dest: an char pointer parameter
 * @src: an char pointer parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int slen = strlen(src) + 1;

	strncpy(dest, src, slen);
	return (dest);
}
