/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_num_conversion.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/03 12:57:03 by tmercier      #+#    #+#                 */
/*   Updated: 2022/02/04 15:17:25 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_putnbr_va_arg(va_list arg)
{
	int	i;

	i = va_arg(arg, int);
	ft_putsignednbr_fd(i, 1);
	if (i < 0)
		return (ft_nbrlen(i) + 1);
	else
		return (ft_nbrlen(i));
}

int	ft_unsigned_va_arg(va_list arg)
{
	unsigned int	u;

	u = va_arg(arg, int);
	ft_putunsignednbr_fd(u, 1);
	return (ft_nbrlen(u));
}

int	ft_lowerhex_va_arg(va_list arg)
{
	unsigned int	n;

	n = (unsigned int)va_arg(arg, unsigned int);
	ft_putunsigned_base_fd(n, 16, 'x', 1);
	return (ft_hexlen(n));
}

int	ft_upperhex_va_arg(va_list arg)
{
	unsigned int	n;

	n = (unsigned int)va_arg(arg, unsigned int);
	ft_putunsigned_base_fd(n, 16, 'X', 1);
	return (ft_hexlen(n));
}
