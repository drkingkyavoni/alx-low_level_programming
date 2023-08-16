#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 *
 * @head: dlistint_t
 * @index: unsigned int
 * Return: dlistint_t pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head || (i > index))
		return (NULL);

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
