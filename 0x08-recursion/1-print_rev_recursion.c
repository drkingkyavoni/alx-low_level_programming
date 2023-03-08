#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string followed by a new line
 * Description: uses pointers
 * @s: a char pointer parameter
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
