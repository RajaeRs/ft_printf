/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:34:50 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/26 19:56:29 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(long int nb, int *i)
{
	if (nb < 0)
	{
		ft_print_char('-', i);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_print_nbr(nb / 10, i);
		ft_print_nbr(nb % 10, i);
	}
	else
		ft_print_char(nb + 48, i);
}
