#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string to search
 * @accept: characters to look for
 *
 * Description: locate 1st occurrence Char c in the string s or NULL if none
 *
 * Return: pointer to byte in s that matches or NULL if no byte is not found.
 */
char *_strpbrk(char *s, char *accept)
{
/*Check for the End of s*/
	while (*s != '\0')
	{
/*Check for the End of accept*/
		while (*accept != '\0')
		{
/*Search for the 1st match and point to it*/
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}

