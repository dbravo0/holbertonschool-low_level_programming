#ifndef DOG_H_
#define DOG_H_

int _putchar(char c);

/**
 * struct dog - Properties of a set of variables
 * @name: Variable that holds the name
 * @age: Variable that holds the age
 * @owner: Variable that holds the onwer
 *
 * Description: Struction for use it with the dog and his owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
