#include "search_algos.h"
/**
 *binary_search - a function that searches for a value in a sorted
 *array of integers using the Binary search algorithm
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value of the search
 *Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left_idx, right_idx;

	if (array == NULL)
		return (-1);
	for (left_idx = 0, right_idx = size - 1; right_idx >= left_idx;)
	{
		printf("Searching in array: ");
		for (i = left_idx; i < right_idx; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left_idx + (right_idx - left_idx) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right_idx = i - 1;
		else
			left_idx = i + 1;
	}
	return (-1);
}
