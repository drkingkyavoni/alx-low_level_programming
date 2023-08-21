#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabet
 * @c: is an int
 * Description: it takes advantage of the _putchar function
 * Return: it returns 1 if c is alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
	/* initiate the result as default 0 */
	int result = 0;

	/* do the check against c */
	if (isalpha(c))
		result = 1;

	/* return the result */
	return (result);
}
