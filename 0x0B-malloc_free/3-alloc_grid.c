#include "main.h"
#include <stdlib.h>
/*
* alloc_grid - creates a 2d array of 0s.
* @width: int - the width of the grid.
* @height: int - the height of the grid.
* Return: a pointer to the array containing the arrays of 0.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int) * (height));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
