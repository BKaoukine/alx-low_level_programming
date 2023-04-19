#include "function_pointers.h"
/**
 * array_iterator - starting point
 * @array: array of int that action will be performed on
 * @size: number of array's elements
 * @action: pointer to a function to perform action on array
 * Description: function that executes a function given as a parameter
 *  on each element of an array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
	return;
	}
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}

