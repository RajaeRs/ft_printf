/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:10:33 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/25 20:54:12 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_adr(unsigned long nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16)
		ft_print_char(base[nb]);
	else
	{
		ft_print_adr(nb / 16);
		ft_print_adr(nb % 16);
	}
}
