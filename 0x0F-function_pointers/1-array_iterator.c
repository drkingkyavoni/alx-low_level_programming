#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: int pointer
 * @size: size_t
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL && size > 0)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

