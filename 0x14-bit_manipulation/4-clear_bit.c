#include "main.h"
/**
 * clear_bit - Strating Point
 * @n: pointer to Decimal number search for bit
 * @index: Index where is the bit to be cleared
 * Description: sets bit at given index to 0
 * Return: 1 for succes or -1 if there's an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int base2 = 1;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1); /*index out of range*/
}


   	base2 = 1 << index;
    *n = *n & ~base2;
return (1);
}
