#include "holberton.h"

/**
 * _strchr - Funtion that alocates a character in a string
 * @s: ...
 * @c: ...
 *
 * Return: Value of ...
 */
char *_strchr(char *s, char c)
{
	for ( ;  ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0')
		{
			return ('\0');
		}
	}

	return ('\0');
}

