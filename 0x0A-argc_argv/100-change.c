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
	int bal, coins;
	char *lastptr;

	coins = 0;
	if (argc != 2) /* check that only two arguments allowed */
	{
		printf("Error\n");
		return (1);
	}

	bal = strtol(argv[1], &lastptr, 10); /* check if digit */
	if (lastptr == *argv || *lastptr != '\0' || bal < 0)
	{
		printf("Error\n");
		return (1);
	}

	while (bal) /* count coins for each debit */
	{
		bal -=  (bal >= 25) ? 25 :
		(bal >= 10) ? 10 :
		(bal >= 5) ? 5 :
		(bal >= 2) ? 2 : 1;
		coins++;
		continue;
	}

	printf("%d\n", coins);
	return (0);
}

