#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 as Success
 */

int main(void)
{
	char alpha_char = 'a';
	char alpha_CHAR = 'A';

	while (alpha_char <= 'z')
	{
		putchar(alpha_char++);
	}

	while (alpha_CHAR <= 'Z')
	{
		putchar(alpha_CHAR++);
	}

	putchar('\n');

	return (0);
}
