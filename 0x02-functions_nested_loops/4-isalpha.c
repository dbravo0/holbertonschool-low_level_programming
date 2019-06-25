#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 *
 *@r: The character to print
 *
 * Return: 1 if is a letter, lowercase or uppercase, 0 if not
 */
int _isalpha(int r)
{

	if ((r >= 'A' && r <= 'Z') || (r >= 'a' && r <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar (r);
}
