#include "holberton.h"

/**
 * _len - Returns the length of string
 * @s: String to be valued
 *
 * Return: Length of string
 */
int _len(char *s)
{
	if (*s == '\0')
	{

		return (0);
	}
	else
	{
		return (1 + _len(s + 1));
	}
}

/**
 * _compar - Compare both strings
 * @s: String to be compared
 * @l: Length of string
 * @i: Beginning of string
 *
 * Return: 1 if is palindrome, 0 if is not
 */
int _compar(char *s, int l, int i)
{
	if (*(s + i) == *(s + l - 1 - i) && i == (l / 2))
	{

		return (1);
	}
	else if (*(s + i) != *(s + l - 1 - i))
	{

		return (0);
	}
	else
	{

		return (_compar(s, l, i + 1));
	}
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: String to be valued
 *
 * Return: 1 if a string, if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (_compar(s, _len(s), 0) == 1)
	{

		return (1);
	}
	else
	{

		return (0);
	}
}
