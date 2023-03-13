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
	int total = 0;
	int i;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((atoi(argv[i]) == 0) && ((*argv[i] < 45) || (*argv[i] > 57)))
			{
				printf("Error\n");
				return (1);
			}
			total = total + atoi(argv[i]);
		}
		printf("%d\n", total);
	}
	return (0);
}
