#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: Number of elements in the array
 * @cmp: Pointer funtion to be used to compare values
 *
 * Return: index or -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array != NULL) && (cmp != NULL))
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
