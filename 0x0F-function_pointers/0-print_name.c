#include "function_pointers.h"
/**
 * print_name - starting point
 * @name: pointer to name to print
 * @f: pointer to function with char arguement
 * Description: function that prints a name using pointer to function
 */

void print_name(char *name, void (*f)(char *))
{

		f(name);

}
