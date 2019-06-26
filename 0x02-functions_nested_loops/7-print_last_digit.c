#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 *@l: Number to print
 *
 * Return: Last digit of the number
 */
int print_last_digit(int l)
{
	int r;

	if (l > 0)
	{
		r = (l % 10) + '0';
		_putchar(r);
	}
	else
	{
		r = ((l % 10) * -1) + '0';
		_putchar(r);
	}

	return (r - '0');
}
