#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 as Success
 */

int main(void)
{
	register int icounter;

	for (icounter = 0; icounter < 10; icounter++)
	{
		printf("%d", icounter);
	}

	putchar('\n');

	return (0);
}
