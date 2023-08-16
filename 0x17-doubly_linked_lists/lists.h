#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - function prints all the elements of a list
 *
 * @h: dlistint_t
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * dlistint_len - function that returns the number of elements
 *
 * @h: dlistint_t
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h);

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 *
 * @head: dlistint_t
 * @n: const int
 * Return: dlistint_t pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 *
 * @head: dlistint_t
 * @n: const int
 * Return: dlistint_t pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: dlistint_t
 * Return: void
 */
void free_dlistint(dlistint_t *head);

#endif /* LIST_H */