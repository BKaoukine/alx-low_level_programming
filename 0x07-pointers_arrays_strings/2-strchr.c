#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character to find
 *
 * Description: locate 1st occurrence Char c in the string s or NULL if none
 *
 * Return: c or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
