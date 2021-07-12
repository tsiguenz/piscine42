int	visible_buildings_from_left(int y, int **tab)
{
	int	i;
	int	cmp;
	int	ctr;

	ctr = 1;
	cmp = tab[y][0];
	i = 1;
	while (i < 4)
	{
		if (cmp <= tab[y][i])
		{
			cmp = tab[y][i];
			ctr++;
		}
		i++;
	}
	return (ctr);
}

int	visible_buildings_from_right(int y, int **tab)
{
	int	i;
	int	cmp;
	int	ctr;

	ctr = 1;
	cmp = tab[y][3];
	i = 2;
	while (i >= 0)
	{
		if (cmp <= tab[y][i])
		{
			cmp = tab[y][i];
			ctr++;
		}
		i--;
	}
	return (ctr);
}

int	visible_buildings_from_bottom(int x, int **tab)
{
	int	i;
	int	cmp;
	int	ctr;

	ctr = 1;
	cmp = tab[3][x];
	i = 2;
	while (i >= 0)
	{
		if (cmp <= tab[i][x])
		{
			cmp = tab[i][x];
			ctr++;
		}
		i--;
	}
	return (ctr);
}

int	visible_buildings_from_top(int x, int **tab)
{
	int	i;
	int	cmp;
	int	ctr;

	ctr = 1;
	cmp = tab[0][x];
	i = 1;
	while (i < 4)
	{
		if (cmp <= tab[i][x])
		{
			cmp = tab[i][x];
			ctr++;
		}
		i++;
	}
	return (ctr);
}
