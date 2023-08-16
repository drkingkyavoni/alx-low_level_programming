#include "lists.h"


/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 *
 * @head: dlistint_t
 * @n: const int
 * Return: dlistint_t pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *temp;

	if (!head)
		return (NULL);

	last = malloc(sizeof(dlistint_t));
	if (!last)
		return (NULL);

	last->n = n;
	last->next = NULL;
	if (!(*head)) /* if head is empty */
	{
		last->prev = NULL;
		*head = last; /* set head as last */
		return (*head); /* return head */
	}

	temp = *head; /* set temp as head */
	while (temp->next)
		temp = temp->next; /* traverse to the end */
	last->prev = temp;
	temp->next = last;
	return (*head);
}
