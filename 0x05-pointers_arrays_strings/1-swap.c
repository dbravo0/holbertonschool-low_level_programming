#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers
 *@a : Number for be swapped by the value of b
 *@b : Number for be swapped by the value of a
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
