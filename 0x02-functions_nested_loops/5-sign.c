#include <stdio.h>
#include "main.h"
/**
 * print_sign - function checks for positive or negative numbers
 * @n: n is provided as a number
 * Discription: print a sign +,- or 0 depanding on the number
 *
 * Return: 0 if Succes
*/
int print_sign(int n)
{
	int result;

if (n > 0)
{
	int positive = '+';

	_putchar(positive);
	result = 1;
} else if (n < 0)
	{
	int negative = '-';

	_putchar(negative);
	result = -1;
	}
	else
	{
	int eqzero = '0';

	_putchar(eqzero);
		result = 0;
	}
	return (result);
}


