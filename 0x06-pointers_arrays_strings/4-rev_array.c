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

 while (i < n / 2)
{
int temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
i++;
}
}
