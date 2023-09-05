#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * Parameters:
 * @width: Function parameter 1
 * @height: Function parameter 2
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **l;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	l = malloc(sizeof(int *) * height);
	if (l == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		l[x] = malloc(sizeof(int) * width);
		if (l[x] == NULL)
		{
			for (; x >= 0; x--)
				free(l[x]);
			free(l);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			l[x][y] = 0;
	}
	return (l);
}
