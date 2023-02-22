#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: int number n
 * Description: print up or down to 98
 * Return: void
 */

void print_to_98(int n)
{
	/* if n is greater than 98, set start=98; dest=n */
	/* if n is less than 98, set start=n; dest=98 */
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
