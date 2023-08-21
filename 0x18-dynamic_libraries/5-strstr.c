#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * Description: uses pointers
 * @haystack: a char pointer parameter
 * @needle: a char pointer parameter
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
