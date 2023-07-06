#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: listint_t array
 * @idx: unsigned int
 * @n: int
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr, *temp;
	unsigned int i;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	curr = *head;
	for (i = 0; curr && i < idx - 1; i++)
		curr = curr->next;

	if (i != idx - 1 || !curr)
	{
		free(new);
		return (NULL);
	}

	temp = curr->next;
	curr->next = new;
	new->next = temp;

	return (*head);
}

