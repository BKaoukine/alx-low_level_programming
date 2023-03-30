#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 * Discription: copares the first character of each string and returns a value
 *
 * Return: 0 if Succes
*/
int _strcmp(char *s1, char *s2)
{	/*Initialize the comparison varibale*/
int compar;
/*Compar both strings and return values based on the result*/
while(*s1 != '\0' && *s2 != '\0')
{
if (*s1 < *s2 || *s1 > *s2)
compar = *s1 - *s2;
else
compar = *s1 - *s2;
}

return (compar);
}
