#include <stdio.h>
#include "main.h"
/**
 * print_rev - function prints string to STO
 *@str: a pointer to a string array is given to the function
 * Discription: prints a string in to the STO in reverse
 *
 * Return: 0 if Succes
*/
void print_rev(char *s)
{
int i = _strlen(str);
    
while(i>0)
{
putchar(*(str + i));
i--;
}
}
