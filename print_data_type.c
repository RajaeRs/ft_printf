/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_data_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:37:46 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/25 19:59:31 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_data_type(va_list args, const char *str, int i)
{
	int	count;

	count = 0;
	if (str[i] == 'c')
		count = ft_print_char(va_arg (args, int));
	else if (str[i] == 's')
		count = ft_print_str(va_arg (args, char*));
	else if (str[i] == 'd' || str[i] == 'i')
		count = ft_print_nbr(va_arg (args, int));
	else if (str[i] == 'X' || str[i] == 'x')
		count = ft_print_hex(va_arg (args, int), str[i]);
	else if (str[i] == 'p')
	{
		ft_print_str("0x");
		count = ft_print_adr(va_arg (args, unsigned long));
	}
	else if (str[i] == '\\' || str[i] == '%')
		count = ft_print_char('%');
	else if (str[i] == 'u')
		count = ft_print_u(va_arg(args, int));
	return (count);
}
