#include <stdio.h>
/**
 * main - Starting point
 * @argc: The lenght of the compiling parameters
 * @argv: The actual compiling parameters
 *
 *Description: function that prints all parameters used during compiling
 * Return: On success 1.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
