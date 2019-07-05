#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: Number to be print
 */
void print_number(int n)
{
	unsigned int li, in, pr;

	if (n < 0)
	{
		_putchar('-');
		li = n * -1;
	}
	else
	{
		li = n;
	}

	in = li;
	pr = 1;

	while (in > 9)
	{
		in /= 10;
		pr *= 10;
	}

	while (pr >= 1)
	{
		_putchar(((li / pr) % 10) + '0');
		pr /= 10;
	}
}
