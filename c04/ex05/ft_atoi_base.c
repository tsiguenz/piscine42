/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:22:41 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/14 16:55:50 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_in_base(char c, char *base)
{
	while (*base)
	{
		if (c == *base)
			return (1);
		base++;
	}
	return (0);
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

void	ft_clean_str(char **str, int *neg)
{
	while ((**str >= 9 && **str <= 13) || **str == ' ')
		(*str)++;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			*neg *= -1;
		(*str)++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	i;
	int	j;
	int	negative;

	i = 0;
	res = 0;
	negative = 1;
	ft_clean_str(&str, &negative);
	if (!check_base(base))
		return (0);
	while (ft_in_base(str[i], base))
	{
		j = 0;
		while (base[++j])
		{
			if (base[j] == str[i])
				break ;
		}
		res = res * ft_strlen(base) + j;
		i++;
	}
	return (res * negative);
}
