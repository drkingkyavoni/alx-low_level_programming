#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given position
 *
 * @h: dlistint_t
 * @idx: unsigned int
 * @n: int
 * Return: dlistint_t pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *curr = *h, *prev;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 1; curr; i++)
	{
		prev = curr;
		curr = curr->next;

		if (i == idx && curr == NULL)
			return (add_dnodeint_end(h, n));

		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);

			new->n = n;
			prev->next = new;
			new->prev = prev;
			new->next = curr;
			curr->prev = new;
			return (*h);
		}
	}

	return (NULL);
}
