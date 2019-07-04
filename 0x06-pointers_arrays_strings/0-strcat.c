#include "holberton.h"

/**
 * _strcat - Concatenates two strings
 *@dest: Value of return
 *@src: String to be concatenated
 *
 * Return: Value of the pointer
 */
char *_strcat(char *dest, char *src)
{
	int c;
	int p;

	for (c = 0 ; dest[c] != '\0' ; c++)
	{
		;
	}

	for (p = 0 ; src[p] != '\0' ; c++, p++)
	{
		dest[c] = src[p];
	}

	dest[c] = 0;
	return (dest);
}
