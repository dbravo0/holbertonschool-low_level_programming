#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory
 * @str: Holds the copy of the char
 *
 * Return: Array of char
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != 0 ; i++)

	s = malloc(i * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	for (j = 0 ; j < i ; j++)
	{
		s[j] = str[j];
	}

	return (s);
}
