#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowerase to upppercase
 * Description: uses pointers
 * @p: an int pointer array parameter
 * Return: char
 */

char *string_toupper(char *p)
{
	int i = 0;

	while (*(p + i) != '\0')
	{
		*(p + i) = toupper(*(p + i));
		i++;
	}
	return (p);
}
