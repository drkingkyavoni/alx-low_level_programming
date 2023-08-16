#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 *
 * @h: dlistint_t
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
