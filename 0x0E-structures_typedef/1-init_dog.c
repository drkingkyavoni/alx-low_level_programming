#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct dog pointer
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = (struct dog *)malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

