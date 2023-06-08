#include "main.h"
#include <math.h>

/**
 * is_prime_number_check - checks prime number recursively
 * @n: int
 * @flag: int
 * Return: int
 */
int is_prime_number_check(int n, int flag)
{
    if (flag > (int) sqrt((double) n))
        return (1);
    if (n % flag == 0)
        return (0);
    return (is_prime_number_check(n, flag + 1));
}

/**
 * _sqrt_recursion_check - returns prime number recursively
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    if (n > 1 && n <= 3)
        return (n);
    return(is_prime_number_check(n, 2));
}
