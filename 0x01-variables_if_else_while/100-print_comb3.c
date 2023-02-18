#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 as Success
 */

int main(void)
{
	int icounter, icountmax, iacounter;

	icountmax = 10;
	for (icounter = 0; icounter < icountmax; icounter++)
	{
		for (iacounter = icounter + 1; iacounter < icountmax; iacounter++)
		{
			putchar(icounter + '0');
			putchar(iacounter + '0');
			if (icounter != icountmax - 2 && iacounter != icountmax)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
