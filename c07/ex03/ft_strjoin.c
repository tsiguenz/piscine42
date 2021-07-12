/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:10:57 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/12 12:22:03 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(char **strs)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	while (strs[i])
	{
		while (strs[i][j])
		{
			c++;
			j++;
		}
		j = 0;
		i++;
	}
	return (c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	res = malloc(ft_strslen(strs) + 1 + ft_strlen(sep) * size - 1 * sizeof (char));
	if (res == NULL || size == 0)
	{
		res[0] = '\n';
		return (res);
	}
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			res[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		i++;
		while (sep[j])
		{
			res[k] = sep[j];
			k++;
			j++;
		}
	}
	res[k] = '\0';
	return (res);
}

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n",ft_strjoin(4, argv + 1, "/"));
}
