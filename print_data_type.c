/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_data_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:37:46 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/26 19:30:11 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_data_type(va_list args, const char str, int *i)
{
	if (str == 'c')
		ft_print_char(va_arg (args, int), i);
	else if (str == 's')
		ft_print_str(va_arg (args, char *), i);
	else if (str == 'd' || str == 'i')
		ft_print_nbr(va_arg (args, int), i);
	else if (str == 'X' || str == 'x')
		ft_print_hex(va_arg (args, int), str, i);
	else if (str == 'p')
	{
		ft_print_str("0x", i);
		ft_print_adr(va_arg (args, unsigned long), i);
	}
	else if (str == '\\' || str == '%')
		ft_print_char('%', i);
	else if (str == 'u')
		ft_print_u(va_arg(args, int), i);
}
