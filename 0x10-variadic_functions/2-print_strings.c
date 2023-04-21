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
char *stringToPrint, *sep;
	va_list stringArgs;

	va_start(stringArgs, n);
	sep = (char *) separator;

			for (i = 0; i < n; i++)
			{

				stringToPrint = va_arg(stringArgs, char *);
					if (i != 0 && *stringToPrint != '\0' && *sep != '\0')
					{
						printf("%s%s", sep, stringToPrint);
					}
					else if (i != 0 && *stringToPrint == '\0' && *sep != '\0')
						printf("%s%s", sep, "nil");
					else if (*sep == '\0' && *stringToPrint == '\0' )
						printf("%s", "nill");
					else 
						printf("%s", stringToPrint);
			}
printf("\n");

}
