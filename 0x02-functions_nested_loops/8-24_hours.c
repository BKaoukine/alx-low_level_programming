#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function outputs the absolute value of giving number
 * Discription: reproduces the absolut value of number
 *
 * Return: 0 if Succes
*/
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
		}
	}
}


