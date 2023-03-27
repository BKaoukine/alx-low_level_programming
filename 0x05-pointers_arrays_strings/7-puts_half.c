#include <stdio.h>
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
 * puts_half - function returns the values of a string
 *@s: a pointer to a string array is given to the function
 * Discription: prints other half of string in to the STO
 *
 * Return: 0 if Succes
*/
void puts_half(char *s)
{
int i = _strlen(s) - 1;
int j;
if (i % 2 == 0)
{
j = i / 2;
while (j <= i)
{
_putchar(*(s + j));
j++;
}
}
}
