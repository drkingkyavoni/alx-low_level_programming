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
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	int bal = atoi(argv[1]);
	int coins = 0;

	while (bal)
	{
		if (bal >= 25)
		{
			bal -= 25;
		}
		else if (bal >= 10)
		{
			bal -= 10;
		}
		else if (bal >= 5)
		{
			bal -= 5;
		}
		else if (bal >= 2)
		{
			bal -= 2;
		}
		else
		{
			bal -= 1;
		}
		coins++;
		continue;
	}

	printf("%d\n", coins);
	return (0);
}

