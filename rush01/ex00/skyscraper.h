#ifndef SKYSCRAPER_H
# define SKYSCRAPER_H
int		visible_buildings_from_left(int y, int **tab);
int		visible_buildings_from_right(int y, int **tab);
int		visible_buildings_from_top(int x, int **tab);
int		visible_buildings_from_bottom(int x, int **tab);
void	get_column_args(int x, int *args, int *first, int *second);
void	get_line_args(int y, int *args, int *first, int *second);
void	print_table(int **tab);
void	get_input(char *in, int *results);
int		check_line(int x, int y, int **tab, int *args);
int		check_column(int x, int y, int **tab, int *args);
int		check_arg(char *str);
int		line_contains_duplicates(int **tab, int y);
int		column_contains_duplicates(int **tab, int x);
int		is_valid_entry(int x, int y, int **tab, int *args);
int		backtrack(int **tab, int *args, int n);
int		**create_table(int size);
void	destroy_table(int **tab, int size);
void	putchar(char c);
void	print_table(int **tab);
void	error(void);
#endif
