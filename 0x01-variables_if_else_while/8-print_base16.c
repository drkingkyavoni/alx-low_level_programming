#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 as Success
 */

int main(void)
{
	register int icounter;
	register char ccounter;

	for (icounter = 0; icounter < 10; icounter++)
	{
		putchar(icounter + '0');
	}

	for (ccounter = 'a'; ccounter <= 'f'; ccounter++)
	{
		putchar(ccounter);
	}
	putchar('\n');

	return (0);
}
