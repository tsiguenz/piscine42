/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:36:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/01 15:58:07 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int j)
{
	int	d;
	int	u;

	d = i / 10;
	u = i % 10;
	ft_putchar('0' + d);
	ft_putchar('0' + u);
	write(1, " ", 1);
	d = j / 10;
	u = j % 10;
	ft_putchar('0' + d);
	ft_putchar('0' + u);
	if (!(i == 98 && j == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{	
	int	a;
	int	b;

	a = -1;
	b = -1;
	while (a++ < 99)
	{
		while (b++ < 99)
		{
			if (a < b)
			{
				ft_print(a, b);
			}
		}
		b = 0;
	}
}
