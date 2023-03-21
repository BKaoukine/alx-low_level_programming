#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function prints alphabets to STO
 *
 * Discription: print lowercase alphabets to the STO
 *
 * Return: 0 if Succes
*/
void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i, a = 0;

	while (a < 10)
	{
	for (i = 0; i < 26; i++)
	{
		_putchar(alpha[i]);
	}
	if (a < 10)
	{
	_putchar('\n');
	}
	a++;
		}
}
