#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: prev 2 dimensional array
 * @height: column of the array
 *
 */
void free_grid(int **grid, int height)
{
	int start;

	start = 0;
	while (start < height)
	{
		free(grid[start]);
		start++;
	}
	free(grid);
}
