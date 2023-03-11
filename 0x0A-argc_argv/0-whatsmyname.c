#include <stdio.h>
#define  NULLED(i) (void)(i)
/**
 * main - entry point
 * @argc: int pointer array
 * @argv: char pointer array
 * Return: int
 */

int main(int argc, char *argv[])
{
	NULLED(argc);
	printf("%s\n", *argv);
	return (0);
}
