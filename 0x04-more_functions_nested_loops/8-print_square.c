#include "main.h"

/**
 * print_square - prints '#' n square times
 * @size: int size parameter
 * Description: it takes advantage of the _putchar function
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
}
