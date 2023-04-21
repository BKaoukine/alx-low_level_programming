#include "variadic_functions.h"
/**
 * print_numbers - prints given arguments
 * @separator: the string to be printed between numbers
 * @n: the number of elements of the arguments
 * Return: 0 if Succes
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numberToPrint;

	va_list FuncArguments;

	va_start(FuncArguments, n);

	for (i = 0; i < n; i++)
	{
		numberToPrint = va_arg(FuncArguments, int);

		if (separator != NULL && i != 0)
		printf("%s%d", separator, numberToPrint);
		else
		printf("%d", numberToPrint);
	}

	printf("\n");
}
