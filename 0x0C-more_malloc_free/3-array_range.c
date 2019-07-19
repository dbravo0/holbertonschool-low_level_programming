#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * @min: ...
 * @max: ...
 *
 * Return: ...
 */
int *array_range(int min, int max)
{
	int c, r;
	int *a;

	if (min > max)
		return (NULL);

	r = max - min + 1;

	a = malloc(sizeof(int) * r);

	if (a == NULL)
		return (NULL);

	for (c = 0 ; c < r ; c++, min++)
	{
		a[c] = min;
	}

	return (a);
}
