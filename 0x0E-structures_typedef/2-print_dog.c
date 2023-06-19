#include "dog.h"
#include <stdio.h>

/**
* print_dog - function that prints a struct dog
* @d: struct dog pointer
*/
void print_dog(struct dog *d)
{
	struct dog *adog;

	adog = d;
	if (adog)
	{
		printf("Name: %s\n", (!adog->name) ? "(nil)" : adog->name);
		printf("Age: %f\n", (!adog->age) ? 0 : adog->age);
		printf("Name: %s\n", (!adog->owner) ? "(nil)" : adog->owner);
	}
}

