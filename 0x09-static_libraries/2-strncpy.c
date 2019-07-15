#include "holberton.h"

/**
 * _strncpy - Concatenates two strings
 * @dest: Pointer to teh destination array
 * @src: String to be appended
 * @n: The maximum number of characters to be appended
 *
 * Return: Value of the pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0 ; c < n && src[c] != '\0' ; c++)
	{
		dest[c] = src[c];
	}

	for ( ; c < n ; c++)
	{
		dest[c] = '\0';
	}

	return (dest);
}
