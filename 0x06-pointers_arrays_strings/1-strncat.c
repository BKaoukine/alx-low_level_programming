#include <stdio.h>
#include "main.h"
/**
 * _strncat - function concatenate two string
 *@dest: string destination
 *@src: source of the string
 *@n: given number of bytes
 * Discription: copies a string from src to dest and concatenat both
 * Return: 0 if Succes
*/
char *_strncat(char *dest, char *src, int n)
{
/* use a working pointer to preserve dest for the return value */
char *d = dest;
int lenofsrc = _strlen(src);
int i;

/* find the offset of the null terminator in dest */
while (*d != '\0')
{
d++;
}
/* check if n is less or grater than lenght of src*/
if (n < lenofsrc)
{
/* copy the first "n" bytes from the src string there */
*d++ = *src++;
}
/* check if n is greater or equal than lenght of src*/
else if (n >= lenofsrc)
{
for (i = 0; i < lenofsrc; i++)
{
/* copy all bytes from the src string there */
*d++ = *src++;
}
}
/* set the null terminator */
if (n > lenofsrc)
{
*d++ = '\0';
}
/* return the pointer to the destination array */
return (dest);
}
