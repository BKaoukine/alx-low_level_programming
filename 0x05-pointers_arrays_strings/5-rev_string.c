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
 * rev_string - function reverses a string
 *@s: a pointer to a string array is given to the function
 * Discription: produces a string  in reverse
 *
 * Return: 0 if Succes
*/
void rev_string(char *s)
{
int i = 0, j = 0;
char temp;

j = _strlen(s) - 1;
while (i < j)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
i++;
j--;
}
}
