/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:22:28 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/25 19:46:20 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const	char *str, ...);
void	ft_print_char(char c);
int	    print_data_type(va_list args, const char *str, int i);
void	ft_print_str(char *c);
void	ft_print_nbr(int nb);
void	ft_print_adr(unsigned long nb);
void	ft_print_hex(unsigned long nb, char format);
void	ft_print_u(int i);

#endif
