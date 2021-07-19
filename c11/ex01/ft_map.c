/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:18:29 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/19 16:20:32 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*res;
	int	i;

	i = 0;
	res = malloc(length - 1 * sizeof (int));
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
