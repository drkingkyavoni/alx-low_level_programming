#include "main.h"

/**
 * _sqrt_recursion_check - checks square root of number recursively
 * @n: int
 * @start: int
 * @last: int
 * Return: int
 */
int _sqrt_recursion_check(int n, int start, int last)
{
	int mid = (int)(start + last) / 2;
	
	if (n == mid * mid)
		return mid;
	
	if ((start >= last) && (n % mid != 0))
		return (-1);
	
	return (_sqrt_recursion_check(n, (int)(n / mid), mid));
}

/**
 * _sqrt_recursion_check - returns square root of number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
        	return (-1);
    
	if (n == 0)
		return (0);
	
	if (n == 1)
		return (1);
	
	return (_sqrt_recursion_check(n, 0, n));
}


