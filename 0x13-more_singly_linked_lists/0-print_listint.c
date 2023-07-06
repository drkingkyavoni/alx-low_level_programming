#include "lists.h"


/**
 * print_listint - prints all the elements of a listint_t list
 * @h: const listint_t
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}

