#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new list to the end
 * @head: list_t pointer array
 * @str: const char
 * Return: list_t pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new || !str)
		return (NULL);

	new->next = NULL;
	new->str = strdup(str);
	if (*head && head)
	{
		list_t *last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;

	return (*head);
}

