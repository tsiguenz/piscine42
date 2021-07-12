/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:10:57 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/12 15:51:52 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*str_join2(int size, char **strs, char *sep)
{
	char	*res;

	res = malloc(ft_strslen(strs) + 1 + ft_strlen(sep) * size - 1
			* sizeof (char));
	if (res == NULL || size == 0)
	{
		res[0] = '\0';
		return (res);
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	res = str_join2(size, strs, sep);
	while (strs[i] && res[0])
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		j = 0;
		i++;
		if (i < size)
		{
			while (sep[j])
				res[k++] = sep[j++];
		}	
	}
	res[k] = '\0';
	return (res);
}
