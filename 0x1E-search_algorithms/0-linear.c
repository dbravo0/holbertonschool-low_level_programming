#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value:  value to search for
 * Return: returns for the first index, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
