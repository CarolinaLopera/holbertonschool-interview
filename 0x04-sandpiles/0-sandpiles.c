#include "sandpiles.h"

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * sandpiles_sum - sum two sandpiles
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 *
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int tmp[3][3], i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
			tmp[i][j] = grid1[i][j];
		}
	}

	while (tmp[0][0] > 3 || tmp[0][1] > 3 || tmp[0][2] > 3
		|| tmp[1][0] > 3 || tmp[1][1] > 3 || tmp[1][2] > 3
		|| tmp[2][0] > 3 || tmp[2][1] > 3 || tmp[2][2] > 3)
	{
		printf("=\n");
		print_grid(grid1);

		if (tmp[0][0] > 3)
		{
			grid1[0][1] += 1;
			grid1[1][0] += 1;
			grid1[0][0] -= 4; }
		if (tmp[0][1] > 3)
		{
			grid1[0][0] += 1;
			grid1[1][1] += 1;
			grid1[0][2] += 1;
			grid1[0][1] -= 4; }
		if (tmp[0][2] > 3)
		{
			grid1[0][1] += 1;
			grid1[1][2] += 1;
			grid1[0][2] -= 4; }
		if (tmp[1][0] > 3)
		{
			grid1[0][0] += 1;
			grid1[1][1] += 1;
			grid1[2][0] += 1;
			grid1[1][0] -= 4; }
		if (tmp[1][1] > 3)
		{
			grid1[0][1] += 1;
			grid1[1][2] += 1;
			grid1[2][1] += 1;
			grid1[1][0] += 1;
			grid1[1][1] -= 4; }
		if (tmp[1][2] > 3)
		{
			grid1[0][2] += 1;
			grid1[1][1] += 1;
			grid1[2][2] += 1;
			grid1[1][2] -= 4; }
		if (tmp[2][0] > 3)
		{
			grid1[1][0] += 1;
			grid1[2][1] += 1;
			grid1[2][0] -= 4; }
		if (tmp[2][1] > 3)
		{
			grid1[2][0] += 1;
			grid1[1][1] += 1;
			grid1[2][2] += 1;
			grid1[2][1] -= 4; }
		if (tmp[2][2] > 3)
		{
			grid1[1][2] += 1;
			grid1[2][1] += 1;
			grid1[2][2] -= 4; }

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				tmp[i][j] = grid1[i][j];
			}
		}
	}
}
