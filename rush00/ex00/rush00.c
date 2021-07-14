/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wben-mim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:50:06 by wben-mim          #+#    #+#             */
/*   Updated: 2021/07/04 10:50:09 by wben-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int i, int x, int j, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('o');
	else if (i == x - 1 && j == 0)
		ft_putchar('o');
	else if (i == 0 && j == y - 1)
		ft_putchar('o');
	else if (i == x - 1 && j == y - 1)
		ft_putchar('o');
	else if (j == 0 || j == y - 1)
		ft_putchar('-');
	else if (i == 0 || i == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 1 || y < 1)
	{
		return ;
	}
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ft_print_line(i, x, j, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
