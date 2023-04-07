#include <stdio.h>
#include "main.h"
/**
 * _isupper - function checks for uppercase alphabets
 * @c: c provided as a single alphabet
 * Discription: print 1 if the alphab is uppercase to the STO
 *
 * Return: 0 if Succes
*/
int _isupper(int c)
{
	int result;

if (c >= 'A' && c <= 'Z')
{
	result = 1;
} else
	{
		result = 0;
	}
	return (result);
}


