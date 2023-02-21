#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: is an int
 * Description: print_sign uses the _putchar prototype
 * Return: it returns 1 greater -1 less and 0 if otherwise
 */

int print_sign(int n)
{
	/* initiate the result as default -1 */
	int result = -1;

	/* do the check against c */
	if (n > 1)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
		_putchar('-');

	/* return the result */
	return (result);
}
