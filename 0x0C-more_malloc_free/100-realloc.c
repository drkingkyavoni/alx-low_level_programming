#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *aptr;

	if (!ptr)
	{
		aptr = malloc(new_size);
		if (!aptr)
			return (NULL);
		return (aptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		aptr = malloc(new_size);
		if (!aptr)
		{
			free(aptr);
			return (NULL);
		}
		memcpy(aptr, ptr, old_size);
		free(ptr);
		return (aptr);
	}
	aptr = malloc(new_size);
	if (!aptr)
		return (NULL);
	memcpy(aptr, ptr, new_size);
	free(ptr);
	return (aptr);
}

