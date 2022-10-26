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
	int **grid;

	grid = (int**) malloc(sizeof(int*) * hieght);

	for (int i = 0; i < width; i++)
		grid[i] = (int*) malloc(sizeof(int) * width);
	return (grid);
}
