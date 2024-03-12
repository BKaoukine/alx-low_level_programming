#include "search_algos.h"
/**
 *linear_search - a function that searches for a value
 *in an array of integers using the Linear search algorithm
 *@array: array is a pointer to the first element of the arra
 *@size: is the number of elements in array
 *@value:  is the value to search for
 *Return: either the index of the value or -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;  /* Index variable */

/* Iterate through the array */
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
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
