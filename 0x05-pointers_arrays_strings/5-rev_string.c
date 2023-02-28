#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses string
 * Description: uses printf function
 * @s: an char pointer parameter
 * Return: void
 */

void rev_string(char *s)
{
	int slen = strlen(s);
	char *a = s;
	char *b = s + slen - 1;
	char c;

	while (b > a)
	{
		c = *a;
		*a = *b;
		*b = c;
		b--;
		a++;
	}
}
