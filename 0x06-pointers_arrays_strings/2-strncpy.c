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

	for (n = 0 ; src[n] != '\0' ; n++)
	{
		dest[n] = src[n];
	}

	dest[n] = '\0';
	return (dest);
}
