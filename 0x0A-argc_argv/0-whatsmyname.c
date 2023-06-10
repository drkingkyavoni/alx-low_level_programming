#include <stdio.h>

/**
 * main - entry point
 * @argc: int
 * @argv: char pointer
 * Return: int
*/
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}

