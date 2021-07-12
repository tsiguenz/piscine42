/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 09:33:58 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/09 10:44:46 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[j])
	{
		if (base[j] == '-' || base[j] == '+' || (base[j] >= 6 && base[j] <= 13)
			|| base[i] == 32)
			return (0);
		while (base[i])
		{
			if (base[i] == base[j])
				return (0);
			i++;
		}
		j++;
		i = j + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	div;
	long		nb;

	nb = nbr;
	div = 1;
	if (!check_base(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	while (nb / div > ft_strlen(base) - 1)
	{	
		div = div * ft_strlen(base);
	}
	while (nb / div != nb)
	{
		ft_putchar (base[nb / div]);
		nb = nb % div;
		div = div / ft_strlen(base);
	}
	ft_putchar(base[nb]);
}

int main()
{
    int nbr = 0;
    char base[] = "0123456789ABCDEF";

    ft_putnbr_base(nbr,base);
}
