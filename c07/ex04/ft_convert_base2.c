/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:12:39 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/19 19:42:23 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_check_base(char *base);
int	ft_strlen(char *str);

int	ft_calcul_size(int nb, char *base_to)
{
	int	size;
	int	size_base;

	size = 0;
	size_base = 0;
	while (base_to[size_base])
	{
		size_base++;
	}
	if (nb < 0)
	{
		size = size + 1;
		nb = nb * -1;
	}
	while (nb / size_base != 0)
	{
		size++;
		nb = nb / size_base;
	}
	size++;
	return (size);
}

void	ft_remplissage(long nb, int size, char *base_to, char *final_chaine)
{
	int	size_base;
	int	div;
	int	i;
	int	signe;

	signe = 0;
	if (nb < 0)
	{
		signe = 1;
		nb = nb * -1;
		final_chaine[0] = '-';
	}
	i = 0;
	size_base = ft_strlen(base_to);
	div = size_base;
	i = size - 1;
	final_chaine[size + 1] = '\0';
	while (i >= signe)
	{
		final_chaine[i] = base_to[nb % div];
		nb = nb / div;
		i--;
	}
	return ;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	entier;
	int		size;
	char	*final_chaine;

	if ((ft_check_base(base_from) == 1) || (ft_check_base(base_to) == 1))
		return (NULL);
	entier = ft_atoi_base(nbr, base_from);
	size = ft_calcul_size(entier, base_to);
	final_chaine = malloc((size + 1) * sizeof(char));
	if (final_chaine == NULL)
		return (final_chaine);
	final_chaine[size] = '\0';
	ft_remplissage(entier, size, base_to, final_chaine);
	return (final_chaine);
}
