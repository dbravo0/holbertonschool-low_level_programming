#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 *
 *@c: The character to print
 *
 * Return: 1 if is on lower case, 0 if not
 */
int _islower(int r)
{

	if (r >= 'a' && r <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar (r);
}
