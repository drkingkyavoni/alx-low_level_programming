#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 as Success
 */

int main(void)
{
	int icounter, icountmax, iacounter, ibcounter;

	icountmax = 10;
	for (icounter = 0; icounter < icountmax - 2; icounter++)
	{
		for (iacounter = icounter + 1; iacounter < icountmax - 1;
				iacounter++)
		{
			for (ibcounter = iacounter + 1; ibcounter < icountmax;
					ibcounter++)
			{
				putchar(icounter + '0');
				putchar(iacounter + '0');
				putchar(ibcounter + '0');
				if (icounter != icountmax - 3 &&
						iacounter != icountmax
						&& ibcounter != icountmax)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
