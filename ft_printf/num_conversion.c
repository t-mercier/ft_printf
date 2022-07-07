/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_num_conversion.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/03 12:57:03 by tmercier      #+#    #+#                 */
/*   Updated: 2022/02/28 13:29:09 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_va_arg(va_list arg)
{
	int	n;

	n = va_arg(arg, int);
	ft_putnbrbase_fd(n, "0123456789", 1);;
	if (n < 0)
		return (ft_nbrlen(n) + 1);
	else
		return (ft_nbrlen(n));
}

int	ft_unsigned_va_arg(va_list arg)
{
	unsigned int	n;

	n = va_arg(arg, int);
	ft_putnbrbase_fd(n, "0123456789", 1);
	return (ft_nbrlen(n));
}

int	ft_lowerhex_va_arg(va_list arg)
{
	unsigned int	n;

	n = (unsigned int)va_arg(arg, unsigned int);
	ft_putnbrbase_fd(n, "0123456789abcdef", 1);
	return (ft_hexlen(n));
}

int	ft_upperhex_va_arg(va_list arg)
{
	unsigned int	n;

	n = (unsigned int)va_arg(arg, unsigned int);
	ft_putnbrbase_fd(n, "0123456789ABCDEF", 1);
	return (ft_hexlen(n));
}
