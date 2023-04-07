#include <stdio.h>
#include "main.h"
/**
 * _abs - function outputs the absolute value of giving number
 * @n: n is provided as a number
 * Discription: reproduces the absolut value of number
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


