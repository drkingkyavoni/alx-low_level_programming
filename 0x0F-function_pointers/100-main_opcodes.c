#include <stdio.h>
#include <stdlib.h>

/**
 * printOpcodes - print opcodes of a function pointer
 * @func: function pointer
 * @n: int
 * Return: void
*/
void printOpcodes(int (*func)(int, char **), int n)
{
	unsigned char *opcodePtr;
	int i;

	opcodePtr = (unsigned char *)func;

	for (i = 0; i < n; i++)
		printf("%02x ", *(opcodePtr + i));

	printf("\n");
}

/**
 * main - main entry point
 * @argc: int
 * @argv: char pointer
 * Return: int
 */
int main(int argc, char **argv)
{
	int number_of_bytes;
	char *buf;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = strtol(argv[1], &buf, 10);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	printOpcodes(main, number_of_bytes);
	return (0);
}

