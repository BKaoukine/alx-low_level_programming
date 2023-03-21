#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function checks for lowercase alphabets
 * @c: c provided as a single alphabet
 * Discription: print 1 if the alphab is lowercase to the STO
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
} else if( n < 0)
	{
	int negative = '-';
	_putchar(negative);
	result = -1;
	}else
	{
		result = 0;
	}
	return (result);
}


