#include "main.h"
/**
 * _strspn - calculate the length of the initial segment of s
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Description: calculate the length of the initial segment of s
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
/*Initialise a variable to hold the length*/
	unsigned int length_holder = 0;
/*Check for the end of the string using NULL*/
	while (*s != '\0' && *accept != '\0')
	{
/*Check for Characters match*/
		if (*s == *accept)
		{
/*Increment length when we got a match and also accept to check for next Char*/
			length_holder++;
			accept++;
		}
		s++;
	}
/*Return the length of the initial segment*/
	return (length_holder);
}
