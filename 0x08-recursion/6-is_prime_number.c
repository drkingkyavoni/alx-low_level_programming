#include "main.h"

/**
 * is_prime_number - returns 1 for prime number and 0 otherwise
 * Description: uses recursion
 * @n: an int parameter
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_number_check(n, 2));
}

/**
 * is_prime_number_check - helper function for is_prime_number
 * Description: uses recursion
 * @num: an int parameter
 * @count: an int parameter
 * Return: int
 */

int is_prime_number_check(int num, int count)
{
	if (count != num)
	{
		if (num % count == 0)
			return (0);
		else
			return (is_prime_number_check(num, count + 1));
	}
	else
		return (1);
}
