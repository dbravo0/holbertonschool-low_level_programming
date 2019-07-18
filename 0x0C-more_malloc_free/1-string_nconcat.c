#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatenates two strings
 * @s1: ...
 * @s2: ...
 * @n: ...
 *
 * Return: ...
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		;

	for (j = 0 ; s2[j] != '\0' ; j++)
		;

	if (n >= j)
		n = j;

	s = malloc(sizeof(char) * (i + j) + 1);

	for (i = 0 ; s1[i] != '\n' ; i++)
		s[i] = s1[i];

	for (j = 0 ; s2[j] != '\n' ; j++)
		s[i + j] = s2[j];


	if (s2 == '\0')
		return (NULL);

	return (s);
}
