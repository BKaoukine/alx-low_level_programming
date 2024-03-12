#include "search_algos.h"
/*
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of value if found, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;  /* Index variable */

/* Iterate through the array */
for (i = 0; i < size; i++)
{
/* If the value is found, return the index */
if (array[i] == value)
return (i);

/* If it's the last element and value not found, return -1 */
if (i == size - 1 && array[i] != value)
return (-1);
}

/* If value is not found, return -1 */
return (-1);
}
