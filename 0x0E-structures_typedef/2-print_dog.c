#include "dog.h"
#include <stdio.h>

/**
* print_dog - function that prints a struct dog
* @d: struct dog pointer
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (!d->name) ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Name: %s\n", (!d->owner) ? "(nil)" : d->owner);
	}
	else
		printf("\n");
}

