#include "main.h"
/**
 * _print_rev_recursion - function Prints a string in reverse
 * @s: string to print
 *
 * Description:Reverse print the given string using recursive Call
 *
 * Return: a string if succes
 */
void _print_rev_recursion(char *s)
{

/*Check if the String is not NULL*/
		if (*s)
		{
/*Call the function recursivly to move to the other Characaters*/
			_print_rev_recursion(s + 1);
/*Print the last Character*/
			_putchar(*s);
		}

}
