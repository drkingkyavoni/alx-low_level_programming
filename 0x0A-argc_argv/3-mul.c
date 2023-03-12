#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: int pointer array
 * @argv: char pointer array
 * Return: int
 */

int main(int argc, char *argv[])
{
	int total = 1;
	int i = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (i < argc)
		{
			total = total * atoi(*(argv + i));
			i++;
		}
		printf("%d\n", total);
		return (0);
	}
}
