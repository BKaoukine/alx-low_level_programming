#include "main.h"
/**
 * binary_to_uint - Strating Point
 * @b: Pointer to a Char string that holds '0 & 1'
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
unsigned int binary_to_uint(const char *b)
{
/*Initialize the result to 0.*/
unsigned int result = 0;

/* If the input string is NULL, return 0. */
if (b == NULL)
{
return (0);
}

/* Iterate over the input string until the null terminator is reached. */
for (int i = 0; b[i] != '\0'; i++)
{
/* If the current character is '0' or '1', update the result accordingly. */
if (b[i] == '0' || b[i] == '1')
{
/*Shift the current result left by one bit. */
result = result << 1;
/*Add the value of the current character to the result.*/
result += b[i] - '0';
}
/*If the current character is not '0' or '1', return 0.*/
else
{
return (0);
}
}

/*Return the resulting unsigned integer.*/
return (result);
}

