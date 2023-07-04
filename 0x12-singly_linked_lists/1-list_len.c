#include "lists.h"

/**
 * list_len - count number of linked list elements
 * @h: const list_t pointer
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t n_elem;

	for (n_elem = 0; h != NULL; n_elem++)
	{
		if (h)
			h = h->next;
	}

	return (n_elem);
}

