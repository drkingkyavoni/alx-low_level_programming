#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 *
 * @ht: const hash_table_t pointer
 * @key: const char pointer
 * Return: char pointer
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *elem;

	if (!ht || !ht->array || !key)
		return (NULL);

	elem = ht->array[key_index((const unsigned char *)key, ht->size)];
	if (!elem)
		return (NULL);

	while (elem)
	{
		if (strcmp(elem->key, key) == 0)
			return (elem->value);
		elem = elem->next;
	}

	return (NULL);
}
