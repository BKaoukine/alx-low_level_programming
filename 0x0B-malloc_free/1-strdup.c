#include "main.h"
/**
 * _strdup - function copies string
 *@str: char to copy
 * Discription: create a char with specified size of memory to another
 * Return: 0 if Succes
*/
char *_strdup(char *str)
{
char *strcopy;
unsigned int i;
if (str == NULL)
{
return (NULL);
}
else
{
strcopy = (char *) malloc((strlen(str) + 1) * sizeof(char));
if (strcopy == NULL)
return (NULL);

for (i = 0; i < strlen(str); i++)
{
strcopy[i] = str[i];
}
strcopy[i] = '\0';
}
return (strcopy);
}


