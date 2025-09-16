#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to 2D array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **Grid = 0, i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	Grid = malloc(height * sizeof(int *));
	if (Grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		Grid[i] = malloc(width * sizeof(int));
		if (Grid[i] == NULL)
		{
			while (i--)
				free(Grid[i]);
			free(Grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			Grid[i][j] = 0;
	}

	return (Grid);
}

