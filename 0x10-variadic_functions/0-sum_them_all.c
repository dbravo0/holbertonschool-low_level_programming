#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of arguments
 *
 * Return: S
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int c;
	int s = 0;
	va_list a;

	if (n == 0)
		return (0);

	va_start(a, n);
	for (c = 0 ; c < n ; ++c)
		s = s + va_arg(a, int);

	va_end(a);

	return (s);

}
