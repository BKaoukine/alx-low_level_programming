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
size_t i, j, m;

m = sqrt(size);
i = 0;

if (array == NULL)
return (-1);

while (array[i] < value && i < size)
{
printf("Value checked array[%lu] = [%lu]\n", i, i);
i += m;
}

printf("Value found between indexes [%lu] and [%lu]\n", i - m, i);

for (j = i - m; j <= size - 1; j++)
{
printf("Value checked array[%lu] = [%lu]\n", j, j);
if (array[j] == value)
return (j);
}

return (-1);
}
