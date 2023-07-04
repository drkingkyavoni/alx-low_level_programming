#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node to the head
 * @head: list_t pointer array
 * @str: const char
 * Return: list_t pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new || !str)
		return (NULL);

	new->next = (!head) ? NULL : *head;
	new->str = strdup(str);
	*head = new;
	return (*head);
}

