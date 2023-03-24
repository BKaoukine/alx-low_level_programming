#include "main.h"
/**
 * print_triangle - function print triangle using #
 * @n: number of rows in the triangle
 * Description: prints a triangle using # characters
 *
 * Return: void
 */
void print_triangle(int n)
{
int i, j;

if (n <= 0)
{
putchar('\n');
return;
}

for (i = 1; i <= n; i++)
{
for (j = 1; j <= n - i; j++)
{
putchar(' ');
}
for (j = 1; j <= i; j++)
{
putchar('#');
}
putchar('\n');
}
}
