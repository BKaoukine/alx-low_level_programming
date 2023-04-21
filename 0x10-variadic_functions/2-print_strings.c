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
				if (separator != NULL && stringArgs != NULL)
				{
				stringToPrint = va_arg(stringArgs, char *);
					if (i != 0)
					{
						printf("%s%s", separator, stringToPrint);
					}
					else
						printf("%s", stringToPrint);
				}
				else if (separator != NULL && stringArgs == NULL && i != 0)
				printf("%s%s", separator, "Nil");
				else
				printf("%s", "nil");

			}
printf("\n");

}
