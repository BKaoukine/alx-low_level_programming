#include <stdio.h>
#include "main.h"
/**
 * _strcat - function concatenate two string
 *@dest: string destination
 *@src: source of the string
 * Discription: copies a string from src to dest and concatenat both
 * Return: 0 if Succes
*/
char *_strcat(char *dest, char *src)
{
    /* use a working pointer to preserve dest for the return value */
char *d = dest;

    /* find the offset of the null terminator in dest */
	while (*d != '\0')
	{
		d++;
	}
    /* copy the bytes from the src string there */
	while (*src != '\0')
	{
		*d++ = *src++;
	}
    /* set the null terminator */
		*d = '\0';
    /* return the pointer to the destination array */
return (dest);
}
