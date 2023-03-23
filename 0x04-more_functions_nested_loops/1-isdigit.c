#include <stdio.h>
#include "main.h"
/**
 * _isdigit - function checks for digits
 * @c: c provided as a  numbers
 * Discription: print 1 if the alphab is uppercase to the STO
 *
 * Return: 0 if Succes
*/
int _isdigit(int c)
{
	int result;

if (c >= 0 && c <= 9)
{
	result = 1;
} else
	{
		result = 0;
	}
	return (result);
}


