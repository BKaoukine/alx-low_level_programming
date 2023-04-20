#include "3-calc.h"

/**
 * op_add - function adds two integers
 * @a: the number to add
 * @b: the number to add
 * Description : functions takes two int and adds them
 * Return: the result of the addition
 *
*/
int op_add(int a, int b)
{
	int j;

	j = a + b;

	return (j);
}
/**
 * op_sub - function substract two integers
 * @a: the 1st number
 * @b: the number to substract
 * Description : functions takes two int and susbtruct them
 * Return: the result of the substruction
 *
*/
int op_sub(int a, int b)
{
	int j;

	j = a - b;

	return (j);
}
/**
 * op_mul - function multiplies two integers
 * @a: number of type int
 * @b: number of type int
 * Description : functions takes two int and multiplies them
 * Return: the result of the multiplication
 *
*/
int op_mul(int a, int b)
{
	int j;

	j = a * b;

	return (j);
}
/**
 * op_div - function devides two integers
 * @a: number of type int
 * @b: number of type int
 * Description : functions takes two int and devide them
 * Return: the result of the devide
 *
*/
int op_div(int a, int b)
{
	int j;

	j = a / b;

	return (j);
}
/**
 * op_mod - function modulate two integers
 * @a: number of type int
 * @b: number of type int
 * Description : functions takes two int and modulate them
 * Return: the result of the modulation
 *
*/
int op_mod(int a, int b)
{
	int j;

	j = a % b;

	return (j);
}


