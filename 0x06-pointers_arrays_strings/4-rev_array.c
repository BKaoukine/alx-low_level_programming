#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the array of numbers
 *@a: array
 *@n: number of elements
 * Discription: this function reverses the n elements of an array
 *
 * Return: 0 if Succes
*/
void reverse_array(int *a, int n)
{
int i = 0;

while (n != 0)
{
a[i] = a[n];
n--;
i++;
}
}
