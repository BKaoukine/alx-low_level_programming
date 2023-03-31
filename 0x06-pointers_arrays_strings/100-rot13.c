#include "main.h"
#include <stdio.h>

/**
* rot13 - encodes a string using rot13.
* @s: the given string to be encoded.
*
* Return: A pointer s to the encoded string.
*/
char *rot13(char *s)
{
/*intialize the integers needed and the rot13 alphabets*/
	int r1 = 0, r2 = 0;
	char rot1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + r1) != 0)/*check the string for NULL*/
	{
		for (r2 = 0; r2 <= 52; r2++)/*Iterate throught rot2 array*/
		{
			if (*(s + r1) == rot1[r2])/*check equality of the index of both arrays*/
			{
				*(s + r1) = rot2[r2];/*set the value of Chr in the s = rot2*/
				break;
			}
		}
				r1++;/*increment the r1 until we hit the NULL*/
	}
		return (s);/*Return the String encoded*/
}
