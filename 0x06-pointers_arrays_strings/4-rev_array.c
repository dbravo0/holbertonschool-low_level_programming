#include "holberton.h"

/**
 * reserve_array - Reverses the content of an array of integers
 * @a: An array of intergers
 * @n: the number of elements to swap
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int c;
	int r;
	int tmp;

	for (c = 0 ; c < n - 1 ; c++)
	{

		for (r = c + 1 ; r > 0 ; r--)
		{
			tmp = a[r];
			a[r] = a[r - 1];
			a[r - 1] = tmp;
		}
	}
}
