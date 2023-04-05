#include "main.h"
/**
 * _puts_recursion - function Prints a string
 * @s: string to print
 *
 * Description: print the given string using recursive Call
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
		} else
		_putchar('\n');

}
