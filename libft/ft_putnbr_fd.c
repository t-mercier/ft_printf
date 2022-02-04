/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:46:30 by tmercier      #+#    #+#                 */
/*   Updated: 2022/02/04 15:06:54 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

#define STR_INT_MIN "-2147483648"

void	ft_putsignednbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd(STR_INT_MIN, 1);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putsignednbr_fd(n / 10, fd);
		ft_putsignednbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd((n + 48), 1);
}

void	ft_putunsignednbr_fd(unsigned int n, int fd)
{
	if (n > 9)
		ft_putunsignednbr_fd(n / 10, fd);
	ft_putchar_fd(((n % 10) + 48), fd);
}
