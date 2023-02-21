#include "main.h"

/**
 * print_alphabet functions prints 'a' to 'z'
 * Description: it takes advantage of the _putchar function
 * Return: it returns no value or void
 */

void print_alphabet(void)
{
	/* count from a to z using _putchar */
	char i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
