#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 *
 *@n: The character to print
 *
 * Return: 1 if is positive, 0 if is 0, -1 if is negative
 */
int print_sign(int n)
{

	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
