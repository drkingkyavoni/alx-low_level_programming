#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: int pointer array
 * @argv: char pointer array
 * Return: int
 */

int main(int argc, char *argv[])
{
	int total = 0;
	int i = 1;

	if (argc >= 2)
	{
		while (i < argc)
		{
			char j = *argv[i];

			if (isdigit(j))
			{
				total += atoi(j);
				i++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", total);
		return (0);
	}
	else
	{
		printf("0\n");
		return (1);
	}
}
