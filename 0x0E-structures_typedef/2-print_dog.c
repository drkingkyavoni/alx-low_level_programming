#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
* print_dog - function that prints a struct dog
* @d: struct dog pointer
*/
void print_dog(struct dog *d)
{
	char buf[100];

	if (d)
	{
		if (d->age)
			gcvt(d->name, 5, buf);
		else
			strncpy(buf, "(nil)", 100);

		printf("Name: %s\n", (!d->name) ? "(nil)" : d->name);
		printf("Age: %s\n", buf);
		printf("Name: %s\n", (!d->owner) ? "(nil)" : d->owner);
	}
	else
		printf("%c", '\0');
}

