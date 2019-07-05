#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @u: An arrway for change from lowecase to uppercase
 *
 * Return: Always 0
 */
char *string_toupper(char *u)
{
	int c;

	for (c = 0 ; c[u] != '\0' ; c++)
	{

		if (c[u] >= 'a' && c[u] <= 'z')
		{
			c[u] -= 32;
		}
	}

	return (u);
}
