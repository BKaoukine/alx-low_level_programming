#include <stdio.h>
#include "main.h"
/**
 * print_line - function print lines using dash
 *@n: number of dashes to use to print line
 * Discription: print line
 *
 * Return: 0 if Succes
*/
void print_line(int n)
{
	int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
	_putchar(95);
}
}
_putchar('\n');
}
