#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to array
 */
char *argstostr(int ac, char **av)
{
/* Declare increment variable*/
	int i, j;

/* Check for invalid input */
	if (ac == 0 || av  == NULL)
		return (NULL);

/* Allocate memory for the array of strings */
	av = malloc(ac * sizeof(int *));
	if (av == NULL)/* Check for allocation failure */
		return (NULL);

	for (i = 0; i < ac ; i++)
	{
		printf("%s\n", av[i]);
	}
/*Return a pointer to the 2D array*/
	return (av);
}
