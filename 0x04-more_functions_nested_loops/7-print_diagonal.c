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
int i, j;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
