#include "main.h"
/**
 * _strstr - search a string for any of 1st bytes
 * @haystack: string to search
 * @needle: string with 1st character to look for
 *
 * Description: locate 1st occurrence in the string s or NULL if none
 *
 * Return: pointer to 1st byte in haystack that matches or NULL if none.
 */
char *_strstr(char *haystack, char *needle)
{
/*Check for the End of haystack*/
	while (*haystack != '\0')
	{
/*Check for the End of needle*/
		char *a = needle;

		while (*a != '\0')
		{
/*Search for the 1st match and point to it*/
			if (*haystack == *a)
			{
				return (haystack);
			}
			haystack++;/*if no match found increment to next char*/
		}

	}
	return (NULL);
}

