#include "holberton.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointer to the buffer to be set
 * @b: Is the value to be set
 * @n: The number of bytes to be set
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
