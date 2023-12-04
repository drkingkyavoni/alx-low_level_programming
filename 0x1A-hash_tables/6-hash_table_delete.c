#include "hash_tables.h"


/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: hash_table_t *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *head;

	if (ht->array != NULL)
	{
		current = head = *(ht->array);
		while (head)
		{
			current = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = current->next;
		}
		free(ht->array);
	}
	if (ht)
		free(ht);
}
