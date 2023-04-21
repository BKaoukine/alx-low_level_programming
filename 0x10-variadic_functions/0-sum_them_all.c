#include "variadic_functions.h"
/**
 * sum_them_all - Sums given arguments
 * @n: the number of elements of the arguments
 * Return: Sum of the arguments
 *
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;	/* Declaring an args variables
					*that holds the function's arguments
					*/
	unsigned int i;
	int sumOfArgs = 0;

	if (n == 0)
	return (0);
	va_start(args, n); /*Save the args in a list of n number of arguments*/

	for (i = 0; i < n; i++)
	{
		sumOfArgs += va_arg(args, int); /*Gets the elements of the list one by one
										*with int QUALIFIER
										*/

		va_end(args); /*STOP the traversal*/
	}
	return (sumOfArgs);
}
