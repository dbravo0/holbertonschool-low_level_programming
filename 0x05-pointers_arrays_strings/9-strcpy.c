#include "holberton.h"

/**
 * _strcpy - Copies a string pointed by src
 * @dest: copy string
 * @src: string to be copied
 *
 * Return: value the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int c;
	int s = 0;

	for (c = 0 ; src[s] == '\0' ; c++)
	{
		s++;
	}

	for (c = 0 ; c < s ; c++)
	{
		dest[c] = src[c];
	}

	dest[c] = '\0';

	return (dest);
}
