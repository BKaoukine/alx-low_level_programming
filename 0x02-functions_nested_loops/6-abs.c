#include <stdio.h>
#include "main.h"
/**
 * print_sign - function checks for positive or negative numbers
 * @n: n is provided as a number
 * Discription: print a sign +,- or 0 depanding on the number
 *
 * Return: 0 if Succes
*/
int _abs(int n)
{
	int result;

if (n > 0)
{
	result = n;
} else if (n < 0)
	{
	result = n * (-1);
	}
	else
	{
		result = n;
	}
	return (result);
}


