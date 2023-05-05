#include "main.h"
/**
 * get_bit - Strating Point
 * @n: Decimal number search for bit
 * @index: Index where is the bit to be returned
 * Description: base10 number convert into base2
 * Return: bit number or -1 if there's an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int base2 = 1;
unsigned int i, bit;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1); /*index out of range*/
}

for (i = 0; i < index; i++)
{
base2 <<= 1;
}

if (base2 & n)
{
bit = 1;
}
else
{
bit = 0;
}

return (bit);
}
