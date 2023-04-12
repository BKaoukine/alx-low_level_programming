#include "main.h"
/**
 * alloc_grid - create a grid of numbers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to concatenated string
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int *grid = malloc(width * height * sizeof(int));
	int *p[2];

	if (width == 0 || height == 0)
	return (NULL);
	if (width < 0 || height < 0)
	return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = {0};
		}

	}

	return (*grid);
}
