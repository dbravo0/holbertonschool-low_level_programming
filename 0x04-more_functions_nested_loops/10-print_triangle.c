#include "holberton.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int g, s, t;

	if (size > 0)
	{
		for (g = 0 ; g < size ; g++)
		{
			for (s = 0 ; s < size - g - 1 ; s++)
			{
				_putchar(' ');
			}
			for (t = 0 ; t <= g ; t++)
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
