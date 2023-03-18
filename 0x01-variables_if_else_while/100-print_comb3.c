/* Online C Compiler and Editor */
#include <stdio.h>
/**
  * main - Strating Point
  *
  * Discriptions: this program prints combination of two digits
  *
  *Return: 0 for Successe
  */
int main(void)
{
	int i, b;

	for (i = 0 ; i <= 9 ; i++)
				{
	for (b = i ; b <= 9; b++)
				{
		if (i != 10 && b != 10)
				{
			if (b != i)
				{
				putchar('0' + i);
				putchar('0' + b);
				if (i != 8 || b != 9)
				{
				putchar(',');
				putchar(' ');
				}
				}
				}
				}
				}
					return (0);
}
