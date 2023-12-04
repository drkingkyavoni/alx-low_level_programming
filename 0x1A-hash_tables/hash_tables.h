#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: unsigned long int
 * Return: hash_table_t pointer
 */
hash_table_t *hash_table_create(unsigned long int size);

/**
 * hash_djb2 - function implementing the djb2 algorithm
 *
 * @str: const unsigned char
 * Return: unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - function that gives you the index of a key
 *
 * @key: const unsigned char pointer
 * @size: unsigned long int
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash_table_t
 * @key: const char pointer
 * @value: const char pointer
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_get - function that retrieves a value associated with a key
 *
 * @ht: const hash_table_t pointer
 * @key: const char pointer
 * Return: char pointer
 */
char *hash_table_get(const hash_table_t *ht, const char *key);

/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: const hash_table_t *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht);

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: hash_table_t *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht);

#endif /* HASH_TABLES_H */
