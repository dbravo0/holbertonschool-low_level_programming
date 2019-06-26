#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 *@l: Number to print
 *
 * Return: Last digit of the number
 */
int print_last_digit(int a)
{
	int r;

	if (a > 0)
	{
		r = (a % 10) + '0';
		_putchar(r);
	}
	else
	{
		r = ((a % 10) * -1) + '0';
		_putchar(r);
	}

	return (r - '0');
}
