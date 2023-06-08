#include <unistd.h>

/**
 * _putchar - write a cha to stdout
 * @s: char
 * Return: int
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}

