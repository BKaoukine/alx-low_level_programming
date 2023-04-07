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
/*Eterat throught the haystack*/
	for (; *haystack != '\0'; haystack++)
	{
/*Initialise two pointers to compare*/
		char *a = haystack;
		char *b = needle;
/*Check if there's a match and move to next character*/
		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
/*if b reaches it's end and all characters where found return the haystack*/
		if (*b == '\0')
			return (haystack);
	}
/*if none was found return 0*/
	return (0);
}

