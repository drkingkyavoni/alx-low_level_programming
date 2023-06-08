#include <stddef.h>

/**
 * _putchar - writes a char to stdout
 * @s: char pointer
 * Return: int 
 */
int _putchar(char s);

/**
 * _puts_recursion - writes a string to stdout using recursion
 * @s: char pointer
 * Return: void
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - writes a string to stdout in reverse
 * @s: char pointer
 * Return: void
 */
void _print_rev_recursion(char *s);

/**
 * is_palindrome - test if a string is a palindrome
 * @s: char pointer
 * Return: int 
 */
int is_palindrome(char *s);

/**
 * _strlen_recursion - returns length of a string
 * @s: char pointer
 * Return: int
 */
int _strlen_recursion(char *s);

/**
 * factorial - returns factorial of a number
 * @n: int
 * Return: int
 */
int factorial(int n);

/**
 * _pow_recursion - returns integer to a power of number recursively
 * @x: int
 * @y: int
 * Return: int
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion_check - checks square root of number recursively
 * @n: int
 * @start: int
 * @last: int
 * Return: int
 */
int _sqrt_recursion_check(int n, int start, int last);

/**
 * _sqrt_recursion_check - returns square root of number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n);


/**
 * is_prime_number_check - checks prime number recursively
 * @n: int
 * @flag: int
 * Return: int
 */
int is_prime_number_check(int n, int flag);

/**
 * _sqrt_recursion_check - returns prime number recursively
 * @n: int
 * Return: int
 */
int is_prime_number(int n);
