#include "search_algos.h"
/**
 *jump_search - a function that searches for a value in a sorted
*array of integers using the jump search algorithm
*@array: is a pointer to the first element of the array to search in
*@size: is the number of elements in array
*@value: is the value of the search
*Return: index of value or -1
*/
int jump_search(int *array, size_t size, int value)
{
size_t i, step, jump;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump > size - 1 ? size - 1 : jump;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
