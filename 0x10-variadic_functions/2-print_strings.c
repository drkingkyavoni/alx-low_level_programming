#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: const char
 * @n: const unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list plist;
	char *t;

	va_start(plist, n);
	i = 0;
	if (separator != NULL && n)
	{
		while (i++ < n)
		{
			t = va_arg(plist, char *);
			printf("%s", (!t) ? "(nil)" : t);
			if (i != n)
				printf("%s", separator);
		}
	}
	va_end(plist);
	printf("\n");
}

