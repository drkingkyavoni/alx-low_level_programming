#include "main.h"

/**
 * print_alphabet functions prints 'a' to 'z'
 * do it 10 times	
 * Description: it takes advantage of the _putchar function
 * Return: it returns no value or void
 */

void print_alphabet_x10(void)
{
	/* count from 1 to 10 */
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		/* count from a to z using _putchar */
		char i;
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
