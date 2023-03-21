#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function outputs the absolute value of giving number
 * @n: n is provided as a number
 * Discription: reproduces the absolut value of number
 *
 * Return: 0 if Succes
*/
int print_last_digit(int n)
{
	int result;

	if (n < 0)
	{
		n *= -1;
	}
	result = n % 10;
	_putchar(result + '0');
	return (result);
}


