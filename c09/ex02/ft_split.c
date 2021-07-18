/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:22:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/18 19:35:50 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_separator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	wordcount(char *str, char *charset)
{
	int	ctr;
	int	i;

	ctr = 1;
	i = 0;
	if (str[0] == '\0')
		return (0);
	while (is_separator(str[i], charset))
		i++;
	while (str[i])
	{
		if (is_separator(str[i], charset) && !is_separator(str[i - 1], charset))
			ctr++;
		i++;
	}
	if (is_separator(str[i - 1], charset))
		ctr--;
	return (ctr);
}

int	wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_separator(str[i], charset))
		i++;
	return (i);
}

char	*wordcopy(char *str, int n)
{
	char	*res;

	res = malloc(n + 1 * sizeof (char));
	if (res == NULL)
		return (NULL);
	res[n] = '\0';
	n--;
	while (n >= 0)
	{
		res[n] = str[n];
		n--;
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;
	int		i;
	int		n;

	i = 0;
	size = wordcount(str, charset);
	tab = malloc((size + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		while (*str && is_separator(*str, charset))
			str++;
		n = wordlen(str, charset);
		while (*str && !is_separator(*str, charset))
		{
			tab[i] = wordcopy(str, n);
			str = str + n;
		}
		i++;
	}
	tab[size] = "0";
	return (tab);
}
