#include "lists.h"
#include "stdlib.h"

/**
  * free_list - frees a list
  * @head: list_t
  * Return: void
  */
void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head->next);
		head = head->next;
	}
}
