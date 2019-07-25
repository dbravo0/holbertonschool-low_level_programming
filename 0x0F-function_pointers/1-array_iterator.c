#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on a array
 * @array: Array holding each element with the funtions given as parameters
 * @size: Size of the array
 * @action: Pointer to the funtion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	if ((array != NULL) && (action != NULL))
	{
		for (c = 0 ; c < size ; c++)
			action(array[c]);
	}
}

