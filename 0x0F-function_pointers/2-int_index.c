#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: the number of element in the array
 * @array:the array
 * @cmp:pointer to the function
 * Return:int_index
 *
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = -1;

	if (size <= 0)
		return (j);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			j = i;
			return (j);
		}
	}

	return (j);
}


