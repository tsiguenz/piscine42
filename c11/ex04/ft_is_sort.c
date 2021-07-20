/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 23:18:05 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/20 13:41:34 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	while (i < length - 1 && res == 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			res = 0;
		i++;
	}
	if (res == 1)
		return (res);
	res = 1;
	i = 0;
	while (i < length - 1 && res == 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			res = 0;
		i++;
	}
	return (res);
}
