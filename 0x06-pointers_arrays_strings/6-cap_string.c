#include <stdio.h>
#include "main.h"
/**
 * cap_string - changes all uppercase letters of a string to lowercase
 * @st: the string to modify
 *
 * Return: the modified string
 */
char *cap_string(char *st)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = str[i] + 32;
}
}

return (str);
}
