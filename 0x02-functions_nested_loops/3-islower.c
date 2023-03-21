#include <stdio.h>
#include "main.h"
/**
 * _islower - function checks for lowercase alphabets
 * @c: c provided as a single alphabet
 * Discription: print 1 if the alphab is lowercase to the STO
 *
 * Return: 0 if Succes
*/
int _islower(int c)
{
	int result;

if (c >= 'a' && c <= 'z')
{
	result = 1;
} else
	{
		result = 0;
	}
	return (result);
}


