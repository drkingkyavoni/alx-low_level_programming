#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * Description: uses printf function
 * @c: an int parameter
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	int result = 0;

	if (isupper(c))
		result = 1;

	return (result);
}
