#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: Pointer dog
 *
 **/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(age);
		free(d->owner);
		free(d);
	}
}
