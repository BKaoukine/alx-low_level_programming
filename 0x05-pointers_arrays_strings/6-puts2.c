#include <stdio.h>
#include "main.h"
/**
 * puts2 - function returns the other values of a string
 *@str: a pointer to a string array is given to the function
 * Discription: prints other values of string in to the STO
 *
 * Return: 0 if Succes
*/
void puts2(char *str)
{
int i = 0;

while (*(str + i) != 0)
{
if ((*(str + i) % 2) == 0)
{
putchar(*(str + i));
}
i++;
}
putchar('\n');
}
