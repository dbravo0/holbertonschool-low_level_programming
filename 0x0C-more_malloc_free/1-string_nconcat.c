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

	s = malloc(sizeof(char) * (i + n + 1));
	if (!s)
		return (NULL);

	for (j = 0 ; j < i ; j++)
		s[j] = s1[j];

	for (j = 0 ; j < n ; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
