/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:55:42 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/07/20 15:38:01 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

int	main(int argc, char **argv)
{
	int	arg1;
	int	arg2;

	if (argc != 4)
		return (0);
	arg1 = ft_atoi(argv[1]);
	arg2 = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		ft_sum(arg1, arg2);
	else if (argv[2][0] == '-')
		ft_minus(arg1, arg2);
	else if (argv[2][0] == '/')
		ft_div(arg1, arg2);
	else if (argv[2][0] == '*')
		ft_mult(arg1, arg2);
	else if (argv[2][0] == '%')
		ft_modulo(arg1, arg2);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
