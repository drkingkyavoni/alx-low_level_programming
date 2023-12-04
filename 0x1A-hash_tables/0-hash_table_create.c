#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: unsigned long int
 * Return: hash_table_t*
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	ht = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * ht->size);

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
