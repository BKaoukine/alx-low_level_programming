#include "variadic_functions.h"
/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list arglist;
	int n = 0, i = 0;
	char *separator = ", ";
	char *str;

	va_start(arglist, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			separator = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(arglist, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(arglist, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(arglist, double), separator);
			break;
		case 's':
			str = va_arg(arglist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, separator);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(arglist);
}
