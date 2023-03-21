#include <stdio.h>
#include "main.h"



void print_alphabet(void)
{

	char alpha[]="abcdefghijklmnopqrstuvwxyz";
	int i;
	for(i = 0; i < 26;i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');

}
