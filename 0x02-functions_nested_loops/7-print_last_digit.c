#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * @l: the value to print
 *
 * Return: Depends on if statement results
 */
int print_last_digit(int l)
{
	int r;

	if (l < 0)
	{
		r = -l % 10;
	}
	else
	{
		r = l % 10;
	}
	_putchar(r + '0');
	return (r);
}
