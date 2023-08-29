#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: row of 2D array
 * @height: column of 2D array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 * If width or height is 0 or negative, return NULL
 * NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int c, r, **dim2;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim2 = (int **)malloc(height * sizeof(int *));

	if (dim2 == NULL)
		return (NULL);
	c = 0;
	while (c < height)
	{
		dim2[c] = (int *)malloc(width * sizeof(int));
		if (dim2[c] == NULL)
		{
			r = 0;
			while (r < c)
			{
				free(dim2[r]);
				r++;
			}
			free(dim2);
			return (NULL);
		}
		for (r = 0; r < width; r++)
		{
			dim2[c][r] = 0;
		}
		c++;
	}
	return (dim2);
}


