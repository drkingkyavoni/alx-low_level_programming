#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints last half of a string
 * Description: uses printf function
 * @s: an char pointer parameter
 * Return: void
 */

void puts_half(char *s)
{
	int i, j;
	int slen = strlen(s);

	if (slen % 2 == 0)
		j = slen / 2;
	else
		j = (slen - 1) / 2;

	for (i = j; i < slen; i++)
		printf("%c", *(s + i));
	printf("\n");
}
