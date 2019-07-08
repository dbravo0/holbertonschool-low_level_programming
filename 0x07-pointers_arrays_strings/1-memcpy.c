#include "holberton.h"

/**
 * _strncpy - Funtion that copies a memory area
 * @dest: Value to be returned
 * @src: Memory area to be copied to dest
 * @n: Number of bytes to be copied
 *
 * Return: Value of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0 ; c < n ; c++)
	{
		dest[c] = src[c];
	}

	return (dest);
}
