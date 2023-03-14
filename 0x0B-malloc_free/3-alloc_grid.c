#include <stdlib.h>

/**
 * alloc_grid - creates a 2-dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2-dimensional array, NULL if height or width is 0 or if failure
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if(width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if(arr == NULL)
		return (NULL);

	for(i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if(arr[i] == NULL)
		{
			for(i = 0; i < height; i++)
					free(arr[i]);
			free(arr);
			return (NULL);
		}
	
		for(j = 0; j < width; j++)
				arr[i][j] = 0;
	}
	return (arr);
}
