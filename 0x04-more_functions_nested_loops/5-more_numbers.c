#include "main.h"

/**
 * more_numbers - prints 0 to 14 up to 10 times
 * Description: it takes advantage of the _putchar function
 * Return: void
 */

void more_numbers(void)
{
	/* count from 0 to 9 using _putchar */
	char a, b;
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			a = i / 10;
			b = i % 10;
			if (a > 0)
				_putchar(a + '0');
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
