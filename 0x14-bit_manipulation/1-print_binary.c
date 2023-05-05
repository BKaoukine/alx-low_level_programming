#include "main.h"
/**
 * print_binary - Strating Point
 * @n: Decimal number to convert to binary
 * Description: base10 number convert into base2
 */
void print_binary(unsigned long int n)
{
unsigned long int base2 = 1;

if (n == 0)
{
_putchar('0');
return;
}

while (base2 <= n)
base2 <<= 1;

if (base2 > n)
base2 >>= 1;

while (base2)
{
if (base2 & n)
{
_putchar('1');
}
else
{
_putchar('0');
}

base2 >>= 1;
}

}
