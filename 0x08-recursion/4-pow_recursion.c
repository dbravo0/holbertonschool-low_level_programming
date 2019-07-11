#include "holberton.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: Base value of power
 * @y: Exponential value of power
 *
 * Return: 0 for the lenght of thr string
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{

		return (-1);
	}
	else if (y == 0)
	{

		return (1);
	}

	y--;
	return (x * _pow_recursion(x, y));
}
