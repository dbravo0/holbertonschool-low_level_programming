#include "holberton.h"

/**
 *_isdigit - Funtion that checks for uppercase character.
 *@c: The character to be checked
 *
 *Return: 1 if c is uppercase and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
