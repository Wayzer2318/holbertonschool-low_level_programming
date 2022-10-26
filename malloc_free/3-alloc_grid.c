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

	grid = (int**) malloc(sizeof(int*) * height);

	for (i = 0; i < width; i++)
		grid[i] = (int*) malloc(sizeof(int) * width);
	return (grid);
}
