#include <stdio.h>
/**
 * main - Starting point
 * @argc: The lenght of the compiling parameters
 * @argv: The actual compiling parameters
 *
 *Description: function that prints lenght of parameters used
 * Return: On success 1.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 0)
	{
		argc -= 1;
		printf("%d\n", argc);
	}
	
	return (0);
}
