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
    int dest_len = _strlen(dest);
    int i;

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}
