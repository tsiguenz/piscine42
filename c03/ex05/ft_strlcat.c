/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:12:09 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/15 15:55:42 by tsiguenz         ###   ########.fr       */
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
	unsigned int	i;
	unsigned int	j;
	unsigned int	att_len;

	i = 0;
	j = 0;
	if (ft_strlen(dest) < size)
		att_len = ft_strlen(src) + ft_strlen(dest);
	else
		att_len = ft_strlen(src) + size;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && i < size - 1 && size > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size != 0 && i < size)
		dest[i] = '\0';
	return (att_len);
}
