/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:33:31 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/16 14:56:30 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(char *s1, char *s2)
{
	char tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (str[i] / 2)
	{
		ft_swap(&str[i], &str[j]);
		i++;
		j--;
	}
	return (str);
}

int	main(void)
{
	printf("\n%s\n", ft_strrev("salut ca va"));
	return (0);
}
