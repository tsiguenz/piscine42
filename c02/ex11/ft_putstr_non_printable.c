/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:42:59 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/05 12:35:00 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c < 32 || c == 127)
		return (0);
	return (1);
}

void	ft_conv_hexa(unsigned char c)
{
	char	*hexa;
	char	bs;

	bs = 92;
	hexa = "0123456789abcdef";
	write(1, &bs, 1);
	write(1, &hexa[c / 16], 1);
	write(1, &hexa[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_printable(str[i]))
			ft_putchar(str[i]);
		else
			ft_conv_hexa(str[i]);
		i++;
	}
}
