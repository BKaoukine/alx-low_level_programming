#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function print numbers from 0 to 9
 *
 * Discription: print numbers
 *
 * Return: 0 if Succes
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
