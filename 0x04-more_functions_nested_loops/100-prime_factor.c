#include <stdio.h>
#include <stdbool.h>

/**
 * main - prints fizzbuzz
 * Description: it takes advantage of the printf function
 * Return: 0 as int
 */

int main(void)
{
	long i = 612852475143, pf = 2;

	while (pf != i)
	{
		if (i % pf == 0)
		{
			printf("%ld, ", pf);
			i = i / pf;
		}
		else
			pf++;
	}
	printf("%ld", pf);
	printf("\n");
	return (0);
}
