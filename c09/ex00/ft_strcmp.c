/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:39:06 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/05 15:43:59 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while ((s1[i] || s2[i]) && res == 0)
	{
		if (s1[i] != s2[i])
			res = s1[i] - s2[i];
		i++;
	}
	return (res);
}
