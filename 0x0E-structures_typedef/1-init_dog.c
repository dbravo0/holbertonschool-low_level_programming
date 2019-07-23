#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer that initialize each variable
 * @name: Name of dog is Django
 * @age: Age of dog is 3.5
 * @owner: Owner of the dog is Jay
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
