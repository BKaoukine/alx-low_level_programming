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
int i, j;
	i = _strlen(dest);

	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
}
