/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:22:45 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/16 13:06:03 by tsiguenz         ###   ########.fr       */
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
/*
char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;

	size = wordcount(str, charset);
	tab = malloc((size + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		while (*str && is_separator(*str, charset))
			str++;
	}
	return (tab);
}
*/

int	main(void)
{
//	printf("\n%s\n", ft_split("Salut comment tu vas", " ")[1]);
	printf("%d\n", wordcount("/*-salutca-va/*-+", "/*-+"));
	printf("%d\n", wordlen("tes/t", "/*-+"));
	return (0);
}
