#include "main.h"

/**
 * main - Starting point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: function that prints the sum of given numbers
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
			char *p = argv[i];

			while (*p)
			{
				if (!isdigit(*p))
				{
					isCorrect = false;
					break;
				}
				p++;
			}
			if (!isCorrect)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
