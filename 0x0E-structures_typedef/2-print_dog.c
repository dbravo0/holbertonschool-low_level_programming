#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struck dog
 * @d: ...
 * 
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		d->name = "(nill)";
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age)
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		d->owner = "(nill)";
		printf("%s", d->owner);
	}
	else
		printf("Owner: %s\n", d->owner);
}
