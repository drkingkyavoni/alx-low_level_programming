#include <stdio.h>
#define NULLED(i) (void)(i)

/**
 * main - entry point
 * @argc: int pointer array
 * @argv: char pointer array
 * Return: int
 */

int main(int argc, char *argv[])
{
	NULLED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
