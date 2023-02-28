#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 * main - significant entry point
 * Description: print a random password
 * Return: void
*/

int main(void)
{
	srand(time(NULL));
	int i, l, j;

	while (1)
	{
		l = rand() % 18 + 2;
		for (j = 0; j < l; j++)
		{
			i = rand() % 94 + 33;

			printf("%c", (char)i);
		}
	}
}
