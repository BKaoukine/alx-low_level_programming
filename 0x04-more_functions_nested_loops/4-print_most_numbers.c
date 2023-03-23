#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - function print numbers from 0 to 9
 *
 * Discription: print numbers
 *
 * Return: 0 if Succes
*/
void print_most_numbers(void)
{
	int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0 ; j <= 14 ; j++)
{
if (j > 9)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
