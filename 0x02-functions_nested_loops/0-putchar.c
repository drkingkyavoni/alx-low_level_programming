#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always return 0 as Success
 */

int main(void)
{
	char message[] = "_putchar";
	int i = 0;

	while (message[i] != '\0')
	{
		_putchar(message[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
