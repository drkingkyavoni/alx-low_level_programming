#include "dog.h"
#include <stdlib.h>



/**
* free_dog - function that frees dogs
* @d: dog_t pointer
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
