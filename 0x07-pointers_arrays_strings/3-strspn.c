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
unsigned int colength_holderunt = 0;
/*Initialise a variable for eteration*/
int i, j;

	for (i = 0; s[i]; i++)
	{
/*Check for Characters match*/
		for (j = 0; accept[j]; j++)
		{
/*Increment length when we got a match and also accept to check for next Char*/
			if (s[i] == accept[j])
			{
				length_holder++;
				break;
			}
		}
/*Check for the end of the string -> NULL*/
		if (!accept[j])
		break;
	}
/*Return the length of the initial segment*/
		return (length_holder);
}
