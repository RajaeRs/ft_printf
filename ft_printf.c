/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:30:00 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/25 20:55:40 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const	char *str, ...)
{
	va_list	args;
	int		j;
	int		count;

	j = 0;
	count = 0;
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
		count++;
	}
	va_end (args);
	return (count);
}

int	main(void)
{
	printf("%d\n", ft_printf("%p\n", ""));
	printf("%d", printf("%p\n", ""));

}
