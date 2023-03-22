#include <stdio.h>
#include "main.h"
/**
 * add - function outputs the absolute value of giving number
 * @i: numbers given
 * @j:numbers given
 * Discription: reproduces the absolut value of number
 *
 * Return: 0 if Succes
*/
void print_to_98(int n);
{
/*
Numbers must be separated by a comma, followed by a space
Numbers should be printed in order
The first printed number should be the number passed to your function
The last printed number should be 98
You are allowed to use the standard library
*/
		if(n > 0 && n < 98)
		{
			while (n != 98)
			{
				_putchar('0'+n);
				n++;
			}
				
		}else if(n > 98)
		{
			while(n>98)
			{
				_putchar('0'+n);
				n--;
			}
		}else
		{
			while (n != 98)
			{
				_putchar('0'+ n);
				n++;
			}
			
		}

}


