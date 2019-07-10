#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Factorial value
 *
 * Return: n is lower than 0 returns -1, returns 1 otherwise
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
