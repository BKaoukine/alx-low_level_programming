#include "main.h"
/**
 * _sqrt_recursion - calculate square of an integer
 * @n: integer to calculate
 *
 * Description:calculate the square of an integer
 *
 * Return: a number if succes
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
else
return (n = n / _sqrt_recursion(n / 2));

}

