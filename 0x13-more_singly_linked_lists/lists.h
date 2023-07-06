#ifndef MORE_SINGLY_H
#define MORE_SINGLY_H
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: const listint_t
 * Return: size_t
 */
size_t print_listint(const listint_t *h);

/**
 * listint_len -  returns the number of elements in a linked list
 * @h: const listint_t
 * Return: size_t
 */
size_t listint_len(const listint_t *h);

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: listint_t array
 * @n: const int
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: listint_t array
 * @n: const int
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - function that frees a listint_t list
 * @head: listint_t
 * Return: void
 */
void free_listint(listint_t *head);

/**
 * free_listint2 - function that frees a listint_t list
 * @head: listint_t array
 * Return: void
 */
void free_listint2(listint_t **head);

/**
 * pop_listint - deletes the head node of a  linked list
 * @head: listint_t array
 * Return: int
 */
int pop_listint(listint_t **head);

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: listint_t pointer
 * @index: unsigned int
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);


/**
 * sum_listint - returns the sum of all the data (n)
 * @head: listint_t
 * Return: int
 */
int sum_listint(listint_t *head);

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: listint_t array
 * @idx: unsigned int
 * @n: int
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/**
 * delete_nodeint_at_index - function that deletes a new node
 * @head: listint_t array
 * @index: unsigned int
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);


#endif /* MORE_SINGLY_H */
