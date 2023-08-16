#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * @h: dlistint_t
 * @idx: unsigned int
 * @n: int
 * Return: dlistint_t pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *current = *h, *prev_node = NULL;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; current && i < idx; i++)
	{
		prev_node = current;
		current = current->next;
	}

	if (i < idx)
		return (NULL);

	if (!current)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = prev_node;
	new_node->next = current;

	if (prev_node)
		prev_node->next = new_node;
	current->prev = new_node;

	return (new_node);
}
