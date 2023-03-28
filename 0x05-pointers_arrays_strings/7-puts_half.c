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
int cnt = 0, lengh = 0, n;

	while (s[cnt++])
		lengh++;

	if ((lengh % 2) == 0)
		n = lengh / 2;

	else
		n = (lengh + 1) / 2;

	for (cnt = n; cnt < lengh; cnt++)
	{
		_putchar(s[cnt]);
	}
	_putchar('\n');
}
