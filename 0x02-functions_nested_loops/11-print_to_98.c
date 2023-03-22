#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function outputs the absolute value of giving number
 * @n: numbers given
 * Discription: reproduces the absolut value of number
 *
 * Return: 0 if Succes
*/
void print_to_98(int n)
{
while (n < 98)
{
printf("%i", n);
if (n != 98)
{
printf(", ");
}
n++;
}
while (n > 98)
{
printf("%i", n);
if (n != 98)
{
printf(", ");
}
n--;
}
if (n == 98)
{
printf("%i", n);
}
printf("\n");
}

