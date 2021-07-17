/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 13:36:38 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/16 14:32:04 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	deja_vu(char *str, char c, int pos)
{
	int	i;

	i = pos - 1;
	while (i >= 0)
	{
		if (str[i] == c)
			return (1);
		i--;
	}
	return (0);
}

void	ft_union(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i])
	{
		if (!deja_vu(str1, str1[i], i))
			write(1, &str1[i], 1);
		i++;
	}
	while (str2[j])
	{
		if (!deja_vu(str2, str2[j], j) && !deja_vu(str1, str2[j], i))
			write(1, &str2[j], 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
}
