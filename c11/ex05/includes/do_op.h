/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:16:08 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/20 15:22:10 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

int		ft_atoi(char *str);
void	ft_sum(int a, int b);
void	ft_minus(int a, int b);
void	ft_div(int a, int b);
void	ft_mult(int a, int b);
void	ft_modulo(int a, int b);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);

#endif
