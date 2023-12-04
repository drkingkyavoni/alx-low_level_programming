#include "hash_tables.h"


/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: const hash_table_t *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, printed;
	hash_node_t *elem;

	if (!ht || !ht->array) {
		printf("{}\n");
		return;
	}

	printed = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		elem = ht->array[i];
		while (elem != NULL)
		{
			if (printed)
				printf(", ");

			printf("'%s': '%s'", elem->key, elem->value);
			printed = 1;
			elem = elem->next;
		}
	}

	printf("}\n");
}
