#include <stdlib.h>

/**
 * free_grid - frees the 2D grid created by alloc_grid function
 * @grid: 2D grid
 * @height: height of array
 *
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if(grid == NULL)
		free(grid);

	while(i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
