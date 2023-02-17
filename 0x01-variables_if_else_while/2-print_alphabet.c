#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 as Success
 */

int main(void)
{
	char alpha_char = 'a';

	while (alpha_char <= 'z')
	{
		putchar(alpha_char++);
	}

	putchar('\n');

	return (0);
}
