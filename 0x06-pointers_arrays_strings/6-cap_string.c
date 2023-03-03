#include "main.h"
#include <ctype.h>

/**
 * cap_string - changes all lowerase to upppercase
 * Description: uses pointers
 * @p: an int pointer array parameter
 * Return: char
 */

char *cap_string(char *p)
{
	int i = 0;
	int next = 1;

	while (*(p + i) != '\0')
	{
		while (next)
		{
			switch (*(p + i))
			{
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
				case '\n':
				case '\t':
				case ' ':
					next = 0;
					break;
				default:
					next = 1;
			}
		}

		*(p + i) = toupper(*(p + i));
		i++;
	}
	return (p);
}
