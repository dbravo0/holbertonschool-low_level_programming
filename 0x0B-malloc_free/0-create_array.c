#include "holberton.h"
#include <stdio.h>

/**
 * *create_array - Function that creates an array of chars
 * @size: The size of memory to print
 * @c: ...
 *
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	size = malloc(sizeof(int) * c);

	if (size == 0)
	{
		return (NULL);
	}

	return (0);
}
