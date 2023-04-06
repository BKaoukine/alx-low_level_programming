#include "main.h"
/**
 * _pow_recursion - calculate power of an integer
 * @x: base integer to calculate
 * @y: power integer
 *
 * Description:calculate the power of an integer
 *
 * Return: a number if succes
 */
int _pow_recursion(int x, int y)
{
/*Check if the power is negative*/
	if (y < 0)
	{
		return (-1);
	}
/*Check if the power is equal to zero*/
/*Also this is the base condition*/
	else if (y == 0)
	{
		return (1);
	}
/*Calculate the power using Recursion*/
	return (x * _pow_recursion(x, y - 1));
}

