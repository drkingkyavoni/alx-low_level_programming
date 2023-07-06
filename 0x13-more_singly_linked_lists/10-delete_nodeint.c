#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - function that deletes a new node
 * @head: listint_t array
 * @index: unsigned int
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *curr, *temp;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	curr = *head;
	for (i = 0; curr && i < index - 1; i++)
		curr = curr->next;

	if (i != index - 1 || !curr || !curr->next)
		return (-1);

	temp = curr->next;
	curr->next = temp->next;
	free(temp);

	return (1);
}

