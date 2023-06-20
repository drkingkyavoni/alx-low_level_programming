#include "dog.h"
#include <stddef.h>
#include <stdlib.h>


/**
* new_dog - function that creates a new dog
* @name: char pointer
* @age: float
* @owner: char pointer
* Return: dog_t pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || !owner)
		return (NULL);

	d = (dog_t *)malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

