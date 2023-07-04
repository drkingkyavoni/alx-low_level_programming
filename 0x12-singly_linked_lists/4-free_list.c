#include "lists.h"
#include "stdlib.h"

/**
  * free_list - frees a list
  * @head: list_t
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		head = head->next;
		free(temp);
	}
}
