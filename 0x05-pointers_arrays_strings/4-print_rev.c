#include "main.h"
/**
 * _strlen - function returns the lenght of a string
 *@s: a pointer to a string array is given to the function
 * Discription: prints the lenght of a string
 *
 * Return: 0 if Succes
*/
int _strlen(char *s)
{
int i = 0;

while (*(s + i) != 0)
{
i++;
}
return (i);
}
/**
 * print_rev - function prints string to STO
 *@s: a pointer to a string array is given to the function
 * Discription: prints a string in to the STO in reverse
 *
 * Return: 0 if Succes
*/
void print_rev(char *s)
{
int i = _strlen(s) - 1;

while (i > 0)
{
putchar(*(s + i));
i--;
}
_putchar('\n');
}
