#include <stdio.h>

/**
 * main - entry point
 * @argc: int
 * @argv: char pointer
 * Return: int
*/
int main(int argc, char **argv)
{
	while (*argv)
	{
		printf("%s\n", *argv);
		*argv++;
	}
	return (0);
}

