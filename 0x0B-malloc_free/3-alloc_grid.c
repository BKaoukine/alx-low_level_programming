#include "main.h"
/**
 * alloc_grid - create a grid of numbers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
/* Declare a pointer to a 2D array of integers and increment variables*/
	int i, j;
	int **grid;
)/* Check for invalid input */
	if (width <= 0 || height <= 0
		return (NULL);

/* Allocate memory for the 2D array of integers */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)/* Check for allocation failure */
		return (NULL);

	for (i = 0; i < height; i++)
	{
/* Allocate memory for each row of the 2D array */
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)/* Check for allocation failure */
		{
/* Free previously allocated memory and return NULL */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

/* Initialize each element of the 2D array to zero */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

/*Return a pointer to the 2D array*/
return (grid);
}
