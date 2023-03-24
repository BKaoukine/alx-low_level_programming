#include "main.h"
/**
 * print_number - function print numbers
 *@n: number given to print
 * Discription: print numbers given using only _putchar
 *
 * Return: 0 if Succes
*/
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}

