/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:04:14 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/06 21:23:53 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_equal(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s2[i] == '\0')
		return (1);
	return (0);
}

char	*ft_strstr(char	*str, char *to_find)
{
	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		if (ft_str_is_equal(str, to_find))
			return (str);
		str++;
	}
	return (0);
}
