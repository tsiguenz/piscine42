/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:36:16 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/13 23:10:11 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG "I have an even number of arguments.\n"
# define EVEN(nbr) ((nbr % 2) ? 0 : 1)
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define FALSE 0
# define TRUE 1
# include <unistd.h>
typedef int	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
