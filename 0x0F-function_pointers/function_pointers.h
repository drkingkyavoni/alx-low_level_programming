#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

/**
 * print_name - function that prints a name
 * @name: char pointer
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes a function on each element of an array
 * @array: int pointer
 * @size: size_t
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - searches for an integer
 * @array: int pointer
 * @size: int
 * @cmp: function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */

