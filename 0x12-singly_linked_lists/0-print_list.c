#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - print list of linked list nodes
 * @h: const list_t
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t count;
	char *s;

	if (!h)
		return (0);

	for (count = 0; h != NULL; count++)
	{
		s = h->str;

		if (!s)
			printf("[0] (nil)\n");
		else
			printf("[%ld] %s\n", strlen(s), s);
		h = h->next;
	}

	return (count);
}

