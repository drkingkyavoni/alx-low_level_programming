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
	unsigned int sum, i;
	va_list plist;

	i = 0, sum  = 0;
	if (!n)
		return (0);

	va_start(plist, n);
	while (i++ < n)
		sum += va_arg(plist, int);

	va_end(plist);

	return (sum);
}

