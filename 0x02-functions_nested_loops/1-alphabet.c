#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function prints alphabets to STO
 *
 * Discription: print lowercase alphabets to the STO
 *
 * Return: 0 if Succes
*/


void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');

}
