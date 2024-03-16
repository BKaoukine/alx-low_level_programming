#include "search_algos.h"
/**
 * array_length - Computes the length of an integer array.
 * @array: Pointer to the first element of the array.
 *
 * Return: Length of the array.
 */
size_t array_length(int *array)
{
size_t length = 0;

while (array[length] != 0)
length++;


return (length);
}
/**
 *interpolation_search - a function that searches for a value in a sorted
*array of integers using the interpolation search algorithm
*@array: is a pointer to the first element of the array to search in
*@size: is the number of elements in array
*@value: is the value of the search
*Return: index of value or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
size_t pos, low, high, length;

if (array == NULL || size == 0)
return (-1);

low = 0;
high = size - 1;
length = array_length(array);

while (low <= high && value >= array[low] && value <= array[high])
{
pos = low + ((double)(high - low) / (array[high] - array[low])) *
(value - array[low]);

if (size > length - 1)
{
printf("Value checked array[%lu] is out of range\n", pos);
return (-1);
}

printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);

if (array[pos] == value)
return (pos);

else if (array[pos] > value)
high = pos - 1;

else if (array[pos] < value)
low = pos + 1;

}

return (-1);
}
