#include "holberton.h"

/**
 * _abs - computes the absolute value of a variable
 *@v: The value to print
 *
 *Return: Always 0
 */

int _abs(int v)
{
	int d;

	if (v < 0)
	{
		d = v * -1;
		return (d);
	}
	return (0);
}
