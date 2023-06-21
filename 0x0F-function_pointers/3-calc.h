#ifndef CALC_H
#define CALC_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - returns sum of a and b
 * @a: int
 * @b: int
 * Return: int
 */
int op_add(int a, int b);

/**
 * op_sub - returns subtraction of a and b
 * @a: int
 * @b: int
 * Return: int
 */
int op_sub(int a, int b);

/**
 * op_mul - returns product of a and b
 * @a: int
 * @b: int
 * Return: int
 */
int op_mul(int a, int b);

/**
 * op_div - returns divide of a and b
 * @a: int
 * @b: int
 * Return: int
 */
int op_div(int a, int b);

/**
 * op_mod - returns reminder of division of a and b
 * @a: int
 * @b: int
 * Return: int
 */
int op_mod(int a, int b);

/**
 * get_op_func - function that selects the correct function to perform
 * @s: char pointer
 * Return: int
 */
int (*get_op_func(char *s))(int, int);


#endif /* CALC_H */


