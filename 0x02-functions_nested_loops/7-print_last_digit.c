#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is an int
 * Description: print_last_digit uses the _putschar prototype
 * Return: it returns last digit of parameter n
 */

int print_last_digit(int n)
{
	int neg_result = 0;
	int result = n % 10;

	_putchar('0' + _abs(result));

	if (result < 0)
		neg_result = 4;
	return (neg_result);
}
