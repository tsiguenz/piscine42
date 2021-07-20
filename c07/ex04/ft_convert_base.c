/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:40:06 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/19 19:28:38 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_is_in_the_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (!base[0] || !base[1])
		return (1);
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			return (1);
		if ((base[i] <= 13 && base[i] >= 9) || base[i] == 32)
			return (1);
		i++;
		j = i + 1;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		signe;
	long	entier;
	int		i;

	signe = 1;
	entier = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] && ft_is_in_the_base(str[i], base) != -1)
	{
		entier = entier * ft_strlen(base) + ft_is_in_the_base(str[i], base);
		i++;
	}
	return (entier * signe);
}
