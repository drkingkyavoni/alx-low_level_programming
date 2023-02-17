#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 as Success
 */

int main(void)
{
	int n;
	int last_n;
	char message[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_n = n % 10;

	if (last_n > 5)
		printf("%s %d is %d and is greater than 5\n", message, n, last_n);
	else if (last_n == 0)
		printf("%s %d is %d and is 0\n", message, n, last_n);
	else if (last_n < 6 && last_n != 0)
		printf("%s %d is %d and is less than 6 and not 0\n", message, n, last_n);

	return (0);
}
