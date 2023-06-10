#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: int
 * @argv: char pointer
 * Return: int
*/
int main(int argc, char **argv)
{
	int sum = 0;

	argv++;
	if (argc < 1)
	{
		printf("0\n");
		return (1);
	}

	while (*argv)
	{
		int i = atoi(*argv);

		if ((i == 0) && ((**argv < 48) || (**argv > 57)))
		{
			printf("Error\n");
			return (1);
		}
		sum += i;
		argv++;
	}

	printf("%d\n", sum);
	return (sum);
}

