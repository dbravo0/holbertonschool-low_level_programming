#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - Function that creates an array of chars
 * @size: The size of memory to print
 * @c: The buffer of char
 *
 * Return: Array of char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size != 0)
	{
		s = malloc(sizeof(c) * size);
	}
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		s[i] = c;
	}

	return (s);
}
