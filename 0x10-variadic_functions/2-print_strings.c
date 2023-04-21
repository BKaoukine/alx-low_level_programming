#include "variadic_functions.h"
/**
 * print_strings - prints given arguments
 * @separator: the string to be printed between strings
 * @n: the number of elements of the arguments
 * Return: 0 if Succes
 *
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
					if (i != 0 && stringToPrint != NULL && separator != NULL)
					{
						printf("%s%s", separator, stringToPrint);
					}
					else if (i != 0 && stringToPrint == NULL && separator != NULL)
						printf("%s%s", separator, "nil");
					else if (separator == NULL && stringToPrint == NULL )
						printf("%s", "nill");
					else 
						printf("%s", stringToPrint);
			}
printf("\n");

}
