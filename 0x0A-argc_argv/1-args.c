#include <stdio.h>
#define NLF(i) (void)(i)


/**
 * main - entry point
 * @argc: int
 * @argv: char pointer
 * Return: int
*/
int main(int argc, char **argv)
{
	NLF(argv);
	printf("%d\n", argc);
	return (0);
}

