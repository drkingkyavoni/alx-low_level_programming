#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary of a number
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');

	f(n);
}

/**
 * f - prints the binary in reverse
 * @n: unsigned long int
 * Return: void
 */
void f(unsigned long int n)
{
	if (!n)
		return;
	f(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}

