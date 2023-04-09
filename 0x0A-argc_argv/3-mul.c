#include <stdio.h>
#include <stdlib.h>
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
	int sum, i, j;

	if (argc <= 1 || argc < 2)
	{
	printf("error");
	printf("\n");
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		sum = i * j;
		printf("%d\n", sum);
	}



	return (0);
}
