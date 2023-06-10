#include <stdio.h>
#define NLF(sumo) (void)(sumo)


/**
 * main - not every one's entry point
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

