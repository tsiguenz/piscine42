/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:12:09 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/14 12:23:14 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				wtf;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	wtf = size;
	while (src[j] && i < wtf - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size != 0)
		dest[i] = '\0';
	if (ft_strlen(dest) < size)
		return (ft_strlen(src) + i - j);
	else
		return (ft_strlen(src) + size);
}
