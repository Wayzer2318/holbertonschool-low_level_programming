#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
		return ('\0');

	grid = (int**) malloc(sizeof(int*) * height);

	if (grid == NULL)
		return ('\0');

	for (i = 0; i < width; i++)
	{
		grid[i] = (int*) malloc(sizeof(int) * width);
		if (arr[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(arr[hgt_index]);

			free(arr);
			return ('\0');
		}
	}
	return (grid);
}
