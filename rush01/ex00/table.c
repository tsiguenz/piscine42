#include "skyscraper.h"
#include <stdlib.h>

int	**create_table(int size)
{
	int	i;
	int	j;
	int	**res;

	i = 0;
	j = 0;
	res = (int **) malloc(sizeof(int *) * size);
	if (! res)
		return (0);
	while (i < size)
	{
		res[i] = (int *) malloc(sizeof(int) * size);
		j = 0;
		while (j < size)
		{
			res[i][j] = 0;
			j++;
		}
		i++;
	}
	return (res);
}

void	destroy_table(int **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

/*
 * gets input for a column and stores them in first and second
 */
void	get_column_args(int x, int *args, int *first, int *second)
{
	*first = args[x];
	*second = args[x + 4];
}

/*
 * gets input for a row and stores them in first and second
 */
void	get_line_args(int y, int *args, int *first, int *second)
{
	*first = args[y + 8];
	*second = args[y + 12];
}

void	print_table(int **tab)
{
	int	x;
	int	y;
	int	x_max;
	int	y_max;

	x_max = 4;
	y_max = 4;
	x = 0;
	y = 0;
	while (y < y_max)
	{
		while (x < x_max)
		{
			putchar(tab[y][x] + 48);
			if (x != x_max - 1)
				putchar(32);
			x++;
		}
		x = 0;
		y++;
		putchar('\n');
	}
}
