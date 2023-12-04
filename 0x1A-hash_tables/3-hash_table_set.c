#include "hash_tables.h"


/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash_table_t
 * @key: const char pointer
 * @value: const char pointer
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hn, *elem;

	if (!key || !ht)
		return (0);

	hn = malloc(sizeof(hash_node_t));
	if (!hn)
		return (0);

	hn->key = strdup(key);
	hn->value = strdup(value);
	hn->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	elem = ht->array[index];

	if (elem == NULL)
		ht->array[index] = hn;
	else
	{
		hn->next = elem->next;
		elem->next = hn;
	}

	return (1);
}
