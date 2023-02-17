#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 as Success
 */

int main(void)
{
	char alpha_char;

	for (alpha_char = 'a'; alpha_char <= 'z'; alpha_char++)
	{
		if (alpha_char == 'e' || alpha_char == 'q')
			continue;
		putchar(alpha_char);
	}

	putchar('\n');

	return (0);
}
