#include "main.h"


/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *temp, *res;

	if ((!min && !max) || (min > max))
		return (NULL);
	temp = malloc((max - min + 1) * sizeof(int));
	if (!temp)
		return (NULL);
	res = temp;
	while (min <= max)
		*temp++ = min++;
	return (res);
}
