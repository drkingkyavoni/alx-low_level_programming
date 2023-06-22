#include "variadic_functions.h"
#include <stdarg.h>
#include <ctype.h>

/**
 * sum_them_all - function that returns the sum of all params
 * @n: const unsigned int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i, arg;
	va_list plist;

	i = 0, sum  = 0, arg = 0;
	if (n == 0)
		return (0);

	va_start(plist, n);
	while (i++ < n)
	{
		arg = va_arg(plist, int);
		sum += (isdigit(arg)) ? 0 : arg;
	}

	va_end(plist);

	return (sum);
}

