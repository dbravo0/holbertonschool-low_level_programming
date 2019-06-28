#include "holberton.h"

/**
 * print_square - Prints a square, followed by a new line
 * @size: Number of size
 */
void print_square(int size)
{
	int q, s;

	if (size > 0)
	{
		for (q = 0 ; q < size ; q++)
		{
			for (s = 0 ; s < size ; s++)
			{
				_putchar('#');

			}
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');

	}
}
