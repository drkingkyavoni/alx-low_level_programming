#include "main.h"
#include <stddef.h>
#include <stdlib.h>

char **remove_spaces(char *str)
{
	int *stack, i;
	char **temp, *s;

	i = 0;
	stack = malloc(sizeof(int) * 2);
	
	if (!stack)
		return (NULL);
	while (!str)
	{
		if (sizeof(i)/sizeof(*i) == 2)
			*temp = create
	}		
}

/**
* strtow - split strings into words 
* @str: char pointer
* Return: char pointer
*/
char **strtow(char *str)
{
	char **s;

	if (!str)
		return (NULL);

	s = remove_spaces(str);	
	return (s);
}
