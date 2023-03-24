#include "main.h"
/**
 * print_square - function print square to STO
 * @size: number of # to use to print the square
 * Discription: print square
 *
 * Return: 0 if Succes
*/
void print_square(int size)
{
if (size > 0)
{
int i, j;
for (j = 0; j < size; j++)
{
for (i = 0; i < size; i++)
{
	putchar(35);
}
putchar('\n');
}
}
}
