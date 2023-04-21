#include "variadic_functions.h"
/**
 * print_strings - prints given arguments
 * @separator: the string to be printed between strings
 * @n: the number of elements of the arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *stringToPrint;
va_list stringArgs;

	va_start(stringArgs, n);

	for (i = 0; i < n; i++)
	{
		stringToPrint = va_arg(stringArgs, char *);

			if (stringToPrint != NULL && stringToPrint[0] != '\0')
			{
			printf("%s", stringToPrint);
			}
			else
			{
			printf("nil");
			}

			if (separator != NULL && i != n - 1)
			{
			printf("%s", separator);
			}
	}

	printf("\n");
	va_end(stringArgs);
}


