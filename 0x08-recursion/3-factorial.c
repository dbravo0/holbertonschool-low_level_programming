#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Factorial value
 *
 * Return: 0 for the lenght of thr string
 */
int factorial(int n)
{
	if (n == 0)
	{

		return (1);
	}
	else if (n < 0)
	{

		return (-1);
	}

	return (n * factorial(n - 1));
}
