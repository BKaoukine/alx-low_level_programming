#include <stdio.h>
#include "main.h"
/**
 * _strncpy - function copies a string
 *@dest: destination of the copied string
 *@src: source of the string to copie
 *@n: number of characters to copie
 * Discription: copies a string from one source to another with given number
 *
 * Return: 0 if Succes
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

/*Copy characters from source to destination until*/
/*either "n" characters are copied or source string ends*/
for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

/*If there are remaining bytes in the destination string,*/
/*fill them with null characters ('\0')*/
for ( ; i < n; i++)
	dest[i] = '\0';

/*Return a pointer to the destination string*/
return (dest);
}
