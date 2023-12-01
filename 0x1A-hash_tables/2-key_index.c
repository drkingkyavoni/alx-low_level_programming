#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *
 * @key: const unsigned char pointer
 * @size: unsigned long int
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);
	return (hash_djb2(key) % size);
}