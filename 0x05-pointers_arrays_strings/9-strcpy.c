#include <stdio.h>
#include "main.h"
/**
 * _strcpy - function copies string
 *@dest: string destination
 *@src: source of the string
 * Discription: copies a string from src to dest
 * Return: 0 if Succes
*/
char *_strcpy(char *dest, char *src)
{
while (*src)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';

}
