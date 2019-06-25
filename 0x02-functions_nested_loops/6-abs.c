#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _abs(int)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
