#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of time the character
 */
void print_diagonal(int n)
{
	int d, l;

	if (n > 0)
	{
		for (d = 0 ; d < n ; d++)
		{
			for (l = 0 ; l < d ; l++)
			{
				_putchar(' ');

			}
			_putchar('\\');
			_putchar('\n');

		}
	}
	else
	{
		_putchar(10);

	}
}
