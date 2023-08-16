#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 *
 * @head: dlistint_t
 * @index: unsigned int
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current)
	{
		if (i == index)
		{
			temp = current;
			if (current->next)
				current->next->prev = current->prev;
			if (current->prev)
				current->prev->next = current->next;
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
