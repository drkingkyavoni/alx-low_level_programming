#include "lists.h"

/**
 * print_dlistint - function prints all the elements of a list
 *
 * @h: dlistint_t
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
