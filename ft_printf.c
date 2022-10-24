/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:30:00 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/25 00:56:34 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const	char *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start (args, str);
	while (str[j])
	{
		if (str[j] == '%')
		{
			j++;
			print_data_type(args, str, j);
		}
		else
			ft_print_char(str[j]);
		j++;
	}
	va_end (args);
	return (i);
}

int	main()
{
	ft_printf("%d %d\n", 1265 ,2154);
	//printf("%s %s", "world " ,"!!");
}
