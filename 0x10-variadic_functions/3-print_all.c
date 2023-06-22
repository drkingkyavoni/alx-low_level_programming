#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: const char const pointer
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *s;
	va_list plist;
	int i;

	i = 0;
	va_start(plist, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(plist, int));
					break;
				case 's':
					s = va_arg(plist, char *);
					printf("%s", (!s) ? "(nil)" : s);
					break;
				case 'i':
					printf("%i", va_arg(plist, int));
					break;
				case 'f':
					printf("%f", va_arg(plist, double));
					break;
			}
			i++;
		}
	}
	printf("\n");
	va_end(plist);
}
