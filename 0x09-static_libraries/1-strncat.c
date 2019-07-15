#include "holberton.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to teh destination array
 * @src: String to be appended
 * @n: The maximum number of characters to be appended
 *
 * Return: Value of the pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int p;

	for (c = 0 ; dest[c] != '\0' ; c++)
	{
		;
	}

	for (p = 0 ; n > 0 ; c++, p++)
	{
		dest[c] = src[p];
		n--;
	}

	return (dest);
}
