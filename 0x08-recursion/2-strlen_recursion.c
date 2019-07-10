#include "holberton.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: The string variable to be printed
 *
 * Return: 0 for the lenght of thr string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{

		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
