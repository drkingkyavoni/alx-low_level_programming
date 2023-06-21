#include "3-calc.h"

/**
 * main - primary function
 * @argc: int
 * @argv: char pointer
 * Return: int
 */
int main(int argc, char **argv)
{
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	printf("%d\n", (*get_op_func(argv[2]))(n1, n2));
	return (0);
}

