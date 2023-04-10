#include "main.h"
/**
 * main - Starting point
 * @argc: The lenght of the compiling parameters
 * @argv: The actual compiling parameters
 *
 *Description: function that prints the sum of given numbers
 * Return: On success 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;
	bool isCorrect = true;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			isCorrect = false;
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
		if (isCorrect == false)
		{
			printf("error\n");
			return (0);
		}
		else
		{
			printf("%d\n", sum);
		}
	}
	return (0);
}
