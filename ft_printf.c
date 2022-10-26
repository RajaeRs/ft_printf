/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:30:00 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/26 19:59:07 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const	char *str, ...)
{
	va_list	args;
	int		j;

	j = 0;
	va_start (args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			print_data_type(args, *str, &j);
		}
		else
		{
			ft_print_char(*str, &j);
		}
		str++;
	}
	va_end (args);
	return (j);
}
