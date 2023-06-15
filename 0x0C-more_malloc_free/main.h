#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <stdlib.h>


/**
 * malloc_checked - allocates memory
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenates two strings 
 * @s1: char pointer
 * @s2: char pointer
 * @n: unsigned int
 * Return: char pointer 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: int 
 */
int *array_range(int min, int max);

#endif /* _MAIN_H_ */
