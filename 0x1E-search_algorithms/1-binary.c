#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 * Return: returns index of value, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, m, a = 0, s = size - 1;

	if (array)
	{
		while (a <= s)
		{
			m = (a + s) / 2;

			printf("Searching in array: ");
			for (i = a ; i <= s ; i++)
				printf("%i%s", array[i], i < s ? ", " : "\n");

			if (array[m] == value)
				return (m);
			if (array[m] < value)
				a = m + 1;
			else
				s = m - 1;

		}
	}
	return (-1);
}
