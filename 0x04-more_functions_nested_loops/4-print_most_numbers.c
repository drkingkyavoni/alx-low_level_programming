#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 except 2 & 4
 * Description: it takes advantage of the _putchar function
 * Return: void
 */

void print_most_numbers(void)
{
	/* count from 0 to 9 using _putchar */
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		_putchar(i);
	}
	_putchar('\n');
}
