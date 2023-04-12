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
if (sizeof(str) == 0)
{
return (NULL);
}
else
{
strcopy = (char *) malloc(sizeof(str) * sizeof(char));
if (strcopy == NULL)
return (NULL);

for (i = 0; i < sizeof(strcopy); i++)
{
	strcopy[i] = str[i];
}

}
free(strcopy);
	return (strcopy);
}

