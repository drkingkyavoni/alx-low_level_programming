#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct dog pointer
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *adog;

	adog = d;
	adog->name = name;
	adog->age = age;
	adog->owner = owner;
}
