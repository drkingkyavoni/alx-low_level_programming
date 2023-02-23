#include "main.h"

/**
 * print_line - prints '_' n times
 * @n: int n parameter
 * Description: it takes advantage of the _putchar function
 * Return: void
 */

void print_line(int n)
{
	int i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
