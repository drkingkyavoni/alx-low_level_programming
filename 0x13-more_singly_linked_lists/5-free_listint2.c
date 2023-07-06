#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	while (head && *head)
	{
		new = *head;
		*head = (*head)->next;
		free(new);
	}
}

