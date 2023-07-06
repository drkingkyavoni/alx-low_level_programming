#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: listint_t pointer
 * @index: unsigned int
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *new;

	if (!head)
		return (NULL);

	new = head;

	for (i = 0; new && i < index; i++)
		new = new->next;

	return (new);
}

