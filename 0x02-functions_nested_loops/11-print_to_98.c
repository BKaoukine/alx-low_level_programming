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
	while (n != 98)
{
		printf("%i", n);
	if (n != 98)
		printf(", ");
	if (n < 0)
		n++;
	else if (n >= 0 && n <= 98)
		n++;
else if(n > 98)
{
		n--;
}
}
printf("\n");
}
