#include "main.h"
/**
 * free_grid - deallocate memory of 2D array
 * @grid: the array to deallocate
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		free(grid);
	

}
