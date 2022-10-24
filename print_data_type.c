/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_data_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:37:46 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/25 00:57:36 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_data_type(va_list args, const char *str, int i)
{
	if (str[i] == 'c')
		ft_print_char(va_arg (args, int));
	else if (str[i] == 's')
		ft_print_str(va_arg (args, char*));
	else if (str[i] == 'd' || str[i] == 'i')
		ft_print_nbr(va_arg (args, int));
	i++;
}
