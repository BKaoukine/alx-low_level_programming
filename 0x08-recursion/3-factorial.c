#include "main.h"
/**
 * factorial - calculate factorial of an integer
 * @i: integer to calculate
 *
 * Description:calculate the factoriale of given number using recursive Call
 *
 * Return: a number if succes
 */
int factorial(int i)
{

if (i == 0)
{
return (1);
}
else if (i < 0)
{
return (-1);
}
return (i * factorial(i - 1));
}

