#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digit
 * Description: uses printf function
 * @c: an int parameter
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isdigit(int c)
{
	int result = 0;

	if (isdigit(c))
		result = 1;

	return (result);
}
