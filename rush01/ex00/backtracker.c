#include "skyscraper.h"

/*
 * this bruteforces all possible permitted solutions
 */
int	backtrack(int **tab, int *args, int n)
{
	int	i;
	int	x;
	int	y;

	i = 1;
	x = n % 4;
	y = n / 4;
	if (n == 16)
		return (1);
	while (i < 5)
	{
		tab[y][x] = i;
		if (is_valid_entry(x, y, tab, args))
			if (backtrack(tab, args, n + 1))
				return (1);
		i++;
	}
	tab[y][x] = 0;
	return (0);
}
