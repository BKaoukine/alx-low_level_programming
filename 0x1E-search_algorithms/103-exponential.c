#include "search_algos.h"
/**
 *_binary_search - emplimentation of binary search
 *@array: pointer to the first element
 *@left: left of the array
 *@right: right of the array
 *@value: the value of the array
 *Return: index or -1
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 *exponential_search - a function that searches for a value in a sorted
*array of integers using the exponential search algorithm
*@array: is a pointer to the first element of the array to search in
*@size: is the number of elements in array
*@value: is the value of the search
*Return: index of value or -1
*/
int exponential_search(int *array, size_t size, int value)
{
size_t i, min;

i = 1;

if (array == NULL || size == 0)
{
return (-1);
}

while (i < size && array[i] <= value)
{
printf("Value checked array[%lu] = [%i]\n", i, array[i]);
i = i * 2;
}
min = i < size ? i : size - 1;
return (_binary_search(array, i / 2, min, value));

}
