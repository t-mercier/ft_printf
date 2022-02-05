/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/18 13:07:03 by tmercier      #+#    #+#                 */
/*   Updated: 2022/02/04 15:19:56 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putstr_va_arg(va_list arg);
int		ft_putchar_va_arg(va_list arg);
int		ft_putnbr_va_arg(va_list arg);
int		ft_unsigned_va_arg(va_list arg);
int		ft_lowerhex_va_arg(va_list arg);
int		ft_upperhex_va_arg(va_list arg);
int		ft_print_address_va_arg(va_list arg);

#endif 
