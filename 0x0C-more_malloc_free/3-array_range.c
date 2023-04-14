#include "main.h"
/**
 * array_range - create an array of int
 * @min: minimum number to input
 * @max: maximum number to input
 * Return: pointer to array of int
 */
int *array_range(int min, int max)
{
/* Declare a pointer to the memory of array and increment variables*/
	int j, array_size = (max - min) + 1;
	int *array_int;
/* Check for invalid input */
	if (min > max)
		return (NULL);

/* Allocate memory for the array */
	array_int = malloc(array_size * sizeof(int));
	if (array_int == NULL)/* Check for allocation failure */
		return (NULL);

/* Initialize each element of the array to min to max value */
		for (j = 0; j < array_size; j++)
		{
			array_int[j] = min + j;
		}

/*Return a pointer to the array of int*/
return (array_int);
}

