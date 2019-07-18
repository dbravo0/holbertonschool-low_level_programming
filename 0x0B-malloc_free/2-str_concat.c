#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Concatenated string
 **/

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;

	s = malloc((i + j) * sizeof(s) + 1);

	if (s == NULL)
		return (NULL);

	for (k = 0 ; s1[k] != '\0'; k++)
		s[k] = s1[k];

	j = 0;

	while (s2[j] != '\0')
	{
		s[k] = s2[j];
		j++;
		k++;
	}

	s[k] = '\0';

	return (s);

	free(s);
}
