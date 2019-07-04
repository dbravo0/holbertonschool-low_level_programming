#include "holberton.h"

/**
 * _strcmp - Concatenates two strings
 * @s1: Array for be compared with s2
 * @s2: Array for be compared with s1
 *
 * Return: 0 if equals, 1 if s1 is greater, -1 if not
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;
	int t;

	while (s1[c] == s2[c] && (s1[c] != '\0' || s2[c] != '\0'))
	{
		c++;
	}

	t = s1[c] - s2[c];
	return (t);
}
