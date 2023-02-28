#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * Description: uses printf function
 * @s: an char pointer parameter
 * Return: void
 */

void print_rev(char *s)
{
	int slen = strlen(s);
	char *c = s + slen - 1;

	while (c >= s)
	{
		printf("%c", *c);
		c--;
	}
	printf("\n");
}
