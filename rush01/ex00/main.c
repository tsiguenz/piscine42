#include "skyscraper.h"
#include <unistd.h>

/*
 * transforms the input string into a int array
 */
void	get_input(char *in, int *results)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (in[i] && i < 32)
	{
		if (i % 2 == 0)
		{
			results[j] = (int)(in[i] - 48);
			j++;
		}
		i++;
	}
}

void	putchar(char c)
{
	write(1, &c, 1);
}

/*
 * verifies that the user did not enter any nonsense
 */
int	check_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0 && !(str[i] <= '4' && str[i] >= '1'))
			return (1);
		else if (i % 2 == 1 && str[i] != ' ')
			return (1);
		i++;
	}
	if (i != 31)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	args[16];
	int	**tab;

	if (argc != 2 || check_arg(argv[1]))
	{
		error();
		return (0);
	}
	get_input(argv[1], args);
	tab = create_table(4);
	if (! tab || ! backtrack(tab, args, 0))
	{
		error();
		destroy_table(tab, 4);
		return (0);
	}
	print_table(tab);
	destroy_table(tab, 4);
}
