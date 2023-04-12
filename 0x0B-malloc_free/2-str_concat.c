#include "main.h"
/**
 * str_concat - function copies string
 *@s1: char to copy
 *@s2: char to copy
 * Discription: create a char with specified size of memory
 * Return: 0 if Succes
*/
char *str_concat(char *s1, char *s2)
{
char *strcopy;
unsigned int i = strlen(s1) + strlen(s2);
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
else
{
strcopy = (char *) malloc(i * sizeof(char));
if (strcopy == NULL)
return (NULL);

while (s1 != '\0')
{
	strcopy = s1;
	strcopy++;
}
while (s2 != '\0')
{
	strcopy = s2;
	strcopy++;
}

strcopy[i] = '\0';
}
return (strcopy);
}


