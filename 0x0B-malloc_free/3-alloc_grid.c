#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 *alloc_grid - dsads
 *@width: dsa
 *@height: dsa
 *Return: char pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int pos;
	int subpos;

	if (width <= 0 || height <= 0 || (width == 1 && height == 1))
	{
		return (NULL);
	}
	grid = (int **) malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (pos = 0; pos < height; pos++)
	{
		grid[pos] = (int *) malloc(sizeof(int) * width);
		if (grid[pos] == NULL)
		{
			for (pos--; pos >= 0; pos--)
			{
				free(grid[pos]);
			}
			free(grid);
			return (NULL);
		}
		for (subpos = 0; subpos < width; subpos++)
		{
			grid[pos][subpos] = 0;
		}
	}
	return (grid);
}
