#include "3-calc.h"



/**
 * get_op_func - function that selects the correct function to perform
 * @s: char pointer
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	
	if (!s)
		exit(98);

	i = 0;
	while (ops[i].op != NULL)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}

