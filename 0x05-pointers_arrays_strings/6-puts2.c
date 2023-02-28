#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints even index characters
 * Description: uses printf function
 * @s: an char pointer parameter
 * Return: void
 */

void puts2(char *s)
{
	int i;
	int slen = strlen(s);

	for (i = 0; i < slen; i += 2)
		printf("%c", *(s + i));
	printf("\n");
}
