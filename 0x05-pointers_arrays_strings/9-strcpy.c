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
	int s;
	int c = 0;

	while (1)
	{
		if (src[c] == '\0')
			break;

		c++;
	}

	for (s = 0 ; s < c ; s++)
		dest[s] = src[s];

	dest[s] = '\0';

	return (dest);
}
