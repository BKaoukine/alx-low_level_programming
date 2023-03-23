#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - function print lines using backslash
 *@n: number of backslashes to use to print line
 * Discription: print line
 *
 * Return: 0 if Succes
*/
void print_diagonal(int n)
{
	int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
	_putchar(92);
}
}
_putchar('\n');
}
