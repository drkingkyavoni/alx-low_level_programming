#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 * @c: is an int
 * Description: it takes advantage of the _putchar function
 * Return: it returns 1 if c is lowercase and 0 if otherwise
 */

int _islower(int c)
{
	/* initiate the result as default 0 */
	int result = 0;

	/* do the check against c */
	if (islower(c))
		result = 1;

	/* return the result */
	return (result);
}
