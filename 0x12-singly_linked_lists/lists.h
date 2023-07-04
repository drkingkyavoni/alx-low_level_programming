#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - print list of linked list nodes
 * @h: const list_t
 * Return: size_t
 */
size_t print_list(const list_t *h);

/**
 * list_len - count number of linked list elements
 * @h: const list_t pointer
 * Return: size_t
 */
size_t list_len(const list_t *h);

/**
 * add_node - add node to the head
 * @head: list_t pointer array
 * @str: const char
 * Return: list_t pointer
 */
list_t *add_node(list_t **head, const char *str);



/**
 * add_node_end - add a new list to the end
 * @head: list_t pointer array
 * @str: const char
 * Return: list_t pointer
 */
list_t *add_node_end(list_t **head, const char *str);

/**
  * free_list - frees a list
  * @head: list_t
  * Return: void
  */
void free_list(list_t *head);

void startup(void) __attribute__((constructor));

#endif /* LINKED_LIST_H */

