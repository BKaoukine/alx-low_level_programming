#include <stdio.h>
#include "main.h"
/**
 * _puts - function returns the lenght of a string
 *@str: a pointer to a string array is given to the function
 * Discription: prints a string in to the STO
 *
 * Return: 0 if Succes
*/
void _puts(char *str)
{
int i = 0;

while (*(str + i) != 0)
{
_putchar(*(str + i));
i++;
}

}
