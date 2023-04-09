#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Starting point
 * @argc: The lenght of the compiling parameters
 * @argv: The actual compiling parameters
 *
 *Description: function that prints multiplication of two numbers
 * Return: On success 1.
 */

int main(int argc, char *argv[])
{
	int sum, i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		sum = i * j;
		printf("%d\n", sum);

	}
	else if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
