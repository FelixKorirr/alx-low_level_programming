#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{

int c;

for (c = 0; c < height; c++)
{
free(grid[c]);
}
free(grid);
}
