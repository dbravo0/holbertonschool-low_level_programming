#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Properties of a set of variables
 * @name: Variable that holds the name
 * @age: Variable that holds the age
 * @owner: Variable that holds the onwer
 *
 * Description: Struction for use it with the dog and his owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
