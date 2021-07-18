/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:40:06 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/18 19:41:54 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);
int	check_base(char *base);

int	ft_lenbase(int nbr, char *base)
{
	int	i;
	int	size;

	size = ft_strlen(base);
	i = 2;
	if (size == 0)
		return (0);
	if (nbr < 0)
	{
		++i;
		nbr = nbr * -1;
	}
	while (nbr > ft_strlen(base))
	{
		nbr = nbr / size;
		i++;
	}
	return (i);
}

void	put(char *res, long nb, int is_negative, char *base_to)
{
	long	div;
	int		i;

	div = 1;
	i = is_negative;
	while (nb / div > ft_strlen(base_to) - 1)
		div = div * ft_strlen(base_to);
	while (nb / div != nb)
	{
		res[i++] = base_to[nb / div];
		nb = nb % div;
		div = div / ft_strlen(base_to);
	}
	res[i++] = base_to[nb];
	res[i] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	char	*res;
	int		is_negative;

	is_negative = 0;
	nb = ft_atoi_base(nbr, base_from);
	res = malloc(ft_lenbase(nb, base_to) * sizeof (char));
	if (res == NULL || !check_base(base_from) || !check_base(base_to))
		return (NULL);
	if (nb < 0)
	{
		nb = nb * -1;
		is_negative = 1;
	}
	put(res, nb, is_negative, base_to);
	if (is_negative == 1)
		res[0] = '-';
	return (res);
}
