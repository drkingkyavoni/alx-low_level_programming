#include <stdio.h>

/**
 * main - entry point
 * @argc: int pointer array
 * @argv: char pointer array
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}
