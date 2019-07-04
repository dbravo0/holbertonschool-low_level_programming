#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: array to be used
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int i;
	int l = n - 1;

	for (i = 0 ; i <= l ; i++)
	{
		printf("%d", a[i]);

		if (i < l)
		{
			printf(", ");
		}
	}

	printf("\n");
}
