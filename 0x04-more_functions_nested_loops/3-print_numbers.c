#include "main.h"

/**
 * print_numbers - prints 0 to 9
 * Description: it takes advantage of the _putchar function
 * Return: void
 */

void print_numbers(void)
{
	/* count from 0 to 9 using _putchar */
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
