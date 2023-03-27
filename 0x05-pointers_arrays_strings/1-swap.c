#include <stdio.h>
#include "main.h"
/**
 * swap_int - function swaps integers
 *@a: is a given number to swap
 *@b: is a given number to swap
 * Discription: swaps a and b values
 *
 * Return: 0 if Succes
*/
void swap_int(int *a, int *b)
{
int swap;
swap   = *a;
*a   = *b;
*b   =  swap;
}
