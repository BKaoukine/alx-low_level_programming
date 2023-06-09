#include "main.h"
/**
 * _calloc - allocate memory of an array
 * @nmemb: number of array's elements
 * @size: size of the array memory
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
/* Declare a pointer to the memory of array and increment variables*/
	unsigned int i;
	char *memalloc;
/* Check for invalid input */
	if (nmemb == 0 || size == 0)
		return (NULL);

/* Allocate memory for the array */
	memalloc = malloc(nmemb * size);
	if (memalloc == NULL)/* Check for allocation failure */
		return (NULL);

/* Initialize each element of the array to zero */
	for (i = 0; i < (nmemb * size); i++)
	{
		memalloc[i] = 0;
	}

/*Return a pointer to the allocated memory of the array*/
return (memalloc);
}

