#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - New dog
 * @name: Name of dog is Django
 * @age: Age of dog is 3.5
 * @owner: Name of owner is Jay
 *
 * Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *holby;
	int c, tn, to;

	holby = malloc(sizeof(*holby));

	if (holby == NULL || !(name) || !(owner))
	{
		free(holby);
		return (NULL);
	}

	for (tn = 0 ; name[tn] ; tn++)
		;
	for (to = 0 ; owner[to] ; to++)
		;

	holby->name = malloc(tn + 1);
	holby->owner = malloc(to + 1);

	if (!(holby->name) || !(holby->owner))
	{
		free(holby->name);
		free(holby->owner);
		free(holby);
		return (NULL);
	}
	for (c = 0 ; c < tn ; c++)
		holby->name[c] = name[c];

	holby->name[c] = '\0';

	holby->age = age;

	for (c = 0 ; c < to ; c++)
		holby->owner[c] = owner[c];

	holby->owner[c] = '\0';

	return (holby);
}
