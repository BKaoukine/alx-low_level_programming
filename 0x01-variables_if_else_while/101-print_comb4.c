/* Online C Compiler and Editor */
#include <stdio.h>
/**
  * main - Strating Point
  *
  * Discriptions: this program prints combination of three digits
  *
  *Return: 0 for Successe
  */
int main(void)
{
	int i, a, b;

	for (i = 0 ; i <= 7 ; i++)
	{
	for (a = i ; a <= 8 ; a++)
	{
		for (b = a ; b <= 9 ; b++)
		{
			if (a != b && a != i && i != b)
			{
				putchar('0' + i);
				putchar('0' + a);
				putchar('0' + b);
			if (i != 7 || a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			{
			}
			}
			}
			}
			}
			}
	putchar('\n');
	return (0);
}
