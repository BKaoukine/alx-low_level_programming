#include <stdio.h>
#include <stdlib.h>
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
	else
	{
	printf("error");
	printf("\n");
	return (1);
	}
}
