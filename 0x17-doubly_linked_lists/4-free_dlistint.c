#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: dlistint_t
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head) /* if head is not empty */
	{
		while (head->next)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
		free(head);
	}
}
