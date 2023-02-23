#include "main.h"

/**
 * print_diagonal - prints '_' n diagonal times
 * @n: int n parameter
 * Description: it takes advantage of the _putchar function
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
}
