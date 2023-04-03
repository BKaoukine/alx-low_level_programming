#include "main.h"
/**
*_strchr - locate a character in a string
*@s: string to search
*@c: character to find
*Return: c or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
		while (*s)
	{
			if (*s == c)
			return (s);
			if (*s == '0')
			return (NULL);
		s++;
	}
	return (s);
}
