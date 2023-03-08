#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * Description: uses recursion
 * @n: an int pointer parameter
 * Return: int
 */

int factorial(int n)
{
	if (n >= 1)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
