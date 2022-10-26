/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:48:45 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/26 19:41:34 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int nb, char format, int *i)
{
	char	*base;

	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nb < 16)
		ft_print_char(base[nb], i);
	else
	{
		ft_print_hex(nb / 16, format, i);
		ft_print_hex(nb % 16, format, i);
	}
}
