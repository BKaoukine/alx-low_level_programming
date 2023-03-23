#include <stdio.h>
#include "main.h"
/**
 * print_square - function print lines using dash
 *@n: number of dashes to use to print line
 * Discription: print line
 *
 * Return: 0 if Succes
*/
void print_square(int size)
{
	int size;

if (size > 0)
{
for (i = 0; i < size; i++)
{
	_putchar(35);
}
}
_putchar('\n');
}
