/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:10:33 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/26 19:10:56 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_adr(unsigned long nb, int *i)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16)
	{
		ft_print_char(base[nb], i);
	}
	else
	{
		ft_print_adr(nb / 16, i);
		ft_print_adr(nb % 16, i);
	}
}
