#include "main.h"
#include <stdlib.h>
/**
 *free_grid - free a 2-dimintional array of integer
 *@grid: the 2-dimintional array need to be freed
 *@height: the hight of grid
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
