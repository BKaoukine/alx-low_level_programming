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
if (n < 0)
{
putchar('-');
n = -n;
}

if (n / 10)
{
print_number(n / 10);
}
putchar((n % 10) + '0');

}

