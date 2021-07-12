/*
 * returns false if a not zero entry is present twice 
 * in the given row
 */
int	line_contains_duplicates(int **tab, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			if (tab[y][j] != 0 && tab[y][j] == tab[y][i])
				return (1);
			i++;
		}
		j++;
		i = j + 1;
	}
	return (0);
}

/*
 * returns false if a not zero entry is present twice 
 * in the given row
 */
int	column_contains_duplicates(int **tab, int x)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			if (tab[j][x] != 0 && tab[j][x] == tab[i][x])
				return (1);
			i++;
		}
		j++;
		i = j + 1;
	}
	return (0);
}
