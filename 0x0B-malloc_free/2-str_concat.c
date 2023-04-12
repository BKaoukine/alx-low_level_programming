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
unsigned int i = strlen(s1) + strlen(s2) + 1;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
else
{
char *p;
strcopy = (char *) malloc(i * sizeof(char));
if (strcopy == NULL)
return (NULL);

p = strcopy;
while (*s1 != '\0')
{
*p = *s1;
p++;
s1++;
}

while (*s2 != '\0')
{
*p = *s2;
p++;
s2++;
}

*p = '\0';
}
return (strcopy);
}



