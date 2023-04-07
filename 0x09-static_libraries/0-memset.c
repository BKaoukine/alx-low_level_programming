#include "main.h"
/**
 * _memset - fill a memory with given value
 *@s: array to change
 *@b: the value to apply to the array
 *@n: number of index to change
 * Discription: this function changes a given number of array values to b
 *
 * Return: 0 if Succes
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);

}
