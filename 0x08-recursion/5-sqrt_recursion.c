#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * Description: uses recursion
 * @n: an int parameter
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursion_check(n, 2));
}

/**
 * _sqrt_recursion_check - helper function for _sqrt_recursion
 * Description: uses recursion
 * @num: an int parameter
 * @count: an int parameter
 * Return: int
 */

int _sqrt_recursion_check(int num, int count)
{
	if (count < num)
	{
		if ((num / count == count) && (num % count == 0))
			return (count);
		else
			return (_sqrt_recursion_check(num, count + 1));
	}
	else
		return (-1);
}
