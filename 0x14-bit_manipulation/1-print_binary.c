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
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	print_n_binary(n);
	_putchar('\n');
}

/**
 * print_n_binary - prints the binary of a number
 * @n: unsigned long int
 * Return: void
 */
void print_n_binary(unsigned long int n)
{
	if (!n)
		return;

	print_n_binary(n >> 1);
	_putchar((n & 1) + '0');
}

