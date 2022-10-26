/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:58:49 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/26 19:26:49 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_check(int i)
{
	unsigned int	result;

	result = 0;
	if (i < 0)
	{
		result = 4294967295 + i + 1;
	}
	else
		result = i;
	return (result);
}

void	ft_print_u(int j, int *i)
{
	unsigned int	result;

	result = ft_check(j);
	if (result < 10)
		ft_print_nbr(result, i);
	else
	{
		ft_print_u(result / 10, i);
		ft_print_u(result % 10, i);
	}
}
