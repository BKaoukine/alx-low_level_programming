#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: first parameter - string that the concatenated string will be saved into
 * @src: second parameter - string that will be concatenated to dest
 * @n: third parameter - maximum number of bytes from src that can be concatenated to dest
 *
 * Description: This function concatenates two strings, but will only use at most n bytes from src.
 * If src contains n or more bytes, then the string will not be null-terminated.
 *
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
    int i, concat; // declare variables i and concat

    // loop through the dest string until null terminator is found
    for (i = 0; dest[i] != '\0'; i++)
    {
    }

    // concatenate characters from src to dest until n bytes have been appended
    for (concat = 0; concat < n; concat++)
    {
        dest[i + concat] = src[concat]; // concatenate character from src to dest
        if (src[concat] == '\0') // if end of src string is reached
            concat = n; // exit the loop
    }

    return (dest); // return pointer to string dest
}
