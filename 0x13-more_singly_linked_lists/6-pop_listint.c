#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a  linked list
 * @head: listint_t array
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (!head || !*head)
		return (0);

	new = *head;
	n = new->n;
	*head = new->next;
	free(new);

	return (n);
}

