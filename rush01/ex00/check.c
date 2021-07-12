#include "skyscraper.h"

/*
 * checks if the line:
 * 	- contains a double entry
 * 	- respects the user input
 */
int	check_line(int x, int y, int **tab, int *args)
{
	int	left_arg;
	int	right_arg;

	get_line_args(y, args, &left_arg, &right_arg);
	if (x == 3)
	{
		if (left_arg != visible_buildings_from_left(y, tab))
			return (0);
		if (right_arg != visible_buildings_from_right(y, tab))
			return (0);
	}
	if (line_contains_duplicates(tab, y))
		return (0);
	return (1);
}

/*
 * checks if the column:
 * 	- contains a double entry
 * 	- respects the user input
 */
int	check_column(int x, int y, int **tab, int *args)
{
	int	top_arg;
	int	bottom_arg;

	get_column_args(x, args, &top_arg, &bottom_arg);
	if (y == 3)
	{
		if (top_arg > visible_buildings_from_top(x, tab))
			return (0);
		if (bottom_arg > visible_buildings_from_bottom(x, tab))
			return (0);
	}
	if (column_contains_duplicates(tab, x))
		return (0);
	return (1);
}

/* 
 * This function checks if an attempted value violates any game rules.
 * Even if the function returns true for now,
 * this can be invalidated by the backtracker 
 * in a later cycle.
 */
int	is_valid_entry(int x, int y, int **tab, int *args)
{
	return (check_column(x, y, tab, args) && check_line(x, y, tab, args));
}
