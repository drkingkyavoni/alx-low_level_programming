#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * sum_them_all - function that returns the sum of all params
 * @n: const unsigned int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - function that prints numbers
 * @separator: const char
 * @n: const unsigned int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);


/**
 * print_strings - function that prints strings
 * @separator: const char
 * @n: const unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - function that prints anything
 * @format: const char const pointer
 * Return: void
 */
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
