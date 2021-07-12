/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:43:25 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/07 16:20:53 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	negative;

	res = 0;
	i = 0;
	negative = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (char_is_numeric(str[i]))
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * negative);
}
