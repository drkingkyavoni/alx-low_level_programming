#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: int
 * @argv: char pointer
 * Return: int
*/
int main(int argc, char **argv)
{
	int sum = 1;

	argv++;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	while (*argv)
	{
		sum *= atoi(*argv);
		argv++;
	}
	printf("%d\n", sum);
	return (0);
}

