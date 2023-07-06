#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: listint_t
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;

	return (sum);
}

