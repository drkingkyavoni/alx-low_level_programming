#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: const char
 * @n: const unsigned int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list plist;

	va_start(plist, n);
	i = 0;
	if (separator != NULL && n)
	{
		while (i++ < n)
		{
			printf("%d", va_arg(plist, int));
			if (i != n)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(plist);
}

