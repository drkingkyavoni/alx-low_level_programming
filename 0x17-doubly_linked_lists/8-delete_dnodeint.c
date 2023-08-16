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
	dlistint_t *curr = *head, *temp;

	if (!head || (i < index))
		return (-1);

	for (i = 0; curr; i++)
	{
		if (i != index)
			curr = curr->next;
		else
		{
			if (!curr->prev)
			{
				if (curr->next)
				{
					*head = curr->next;
					(*head)->prev = NULL;
					return (1);
				}
				free(curr);
				return (1);
			}

			temp = curr;
			curr = curr->next;

			if (!curr)
			{
				curr = temp->prev;
				curr->next = NULL;
				return (1);
			}


		}
	}

	return (-1);
}
