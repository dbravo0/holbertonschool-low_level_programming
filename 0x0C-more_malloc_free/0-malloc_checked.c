#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: 
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);

	if (a == '\0')
	{
		exit(98);
	}

	return (a);
}
