#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 as Success
 */

int main(void)
{
	char alpha_char;

	for (alpha_char = 'z'; alpha_char >= 'a'; alpha_char--)
	{
		putchar(alpha_char);
	}

	putchar('\n');

	return (0);
}
