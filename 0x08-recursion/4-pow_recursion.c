#include "main.h"

/**
 * _pow_recursion - returns the value of given number to another
 * Description: uses recursion
 * @x: an int parameter
 * @y: an int parameter
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
