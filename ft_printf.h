/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:22:28 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/26 19:59:18 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const	char *str, ...);
void	ft_print_char(char c, int *i);
void	print_data_type(va_list args, const char str, int *i);
void	ft_print_str(char *c, int *i);
void	ft_print_nbr(long int nb, int *i);
void	ft_print_adr(unsigned long nb, int *i);
void	ft_print_hex(unsigned int nb, char format, int *i);
void	ft_print_u(int j, int *i);

#endif
