#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create pointer to 2d arrays
 * @width: array width
 * @height: array height
 * Return: pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **gd;
	int x, y;

	if (width < 1 || height < 1)
		return NULL;

	gd = malloc(height * sizeof(int *));
	if (gd == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		gd[x] = malloc(width * sizeof(int));
		if (gd[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(gd[y]);
			}
			free(gd);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			gd[x][y] = 0;
		}
	}
	return (gd);
}
