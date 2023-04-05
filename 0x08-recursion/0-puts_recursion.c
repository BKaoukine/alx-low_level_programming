#include "main.h"
/**
 * _puts_recursion - function Prints a string
 * @s: string to print
 *
 * Description: print the given string using recursive Call
 *
 * Return: a string if succes
 */
void _puts_recursion(char *s)
{

/*Check if the String is not NULL*/
		if (*s)
		{
/*Print the first Character*/
			_putchar(*s);
/*Call the function recursivly to move to the other Characaters*/
			_puts_recursion(s + 1);
		}else
_putchar('\n');

}
