/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:34:50 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/25 00:54:48 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_nbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_print_char('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_print_nbr(nb / 10);
		ft_print_nbr(nb % 10);
	}
	else
		ft_print_char(nb + 48);
}