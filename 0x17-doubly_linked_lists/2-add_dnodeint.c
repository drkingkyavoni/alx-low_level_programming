#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 *
 * @head: dlistint_t
 * @n: const int
 * Return: dlistint_t pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->prev = NULL;
	new->next = *head;
	new->n = n;

	if (*head)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
