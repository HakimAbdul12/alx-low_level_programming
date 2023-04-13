#include <stdlib.h>

/**
 * free_grid - frees a 2D array previously allocated by alloc_grid
 * @grid: the 2D array to free
 * @height: the number of rows in the array
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
