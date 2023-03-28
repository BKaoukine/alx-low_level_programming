#include <stdio.h>
#include "main.h"
/**
 * print_array - function prints array of numbers
 *@a: a pointer to a numbers array is given to the function
 *@n: number of the element to be printed
 * Discription: prints the given number of element of an array
 *
 * Return: 0 if Succes
*/
void print_array(int *a, int n)
{
	int i;

for (i = 0; i < n; i++)
{
printf("%i", *(a + i));
if (i < n - 1)
{
printf(", ");
}
}
}
