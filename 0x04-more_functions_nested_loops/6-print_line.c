#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times of _
 */
void print_line(int n)
{
	int l;

	for (l = 0 ; l < n ; l++)
	{
		if (n >= 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
