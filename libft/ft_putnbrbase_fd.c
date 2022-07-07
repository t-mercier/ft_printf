/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:46:30 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:46:31 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

void	ft_putnbrbase_fd(long n, char *base, int fd)
{
	int len = ft_strlen(base);
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd(0x2d, fd);
	}
	if (n > len - 1)
		ft_putnbrbase_fd(n / len, base, fd);
	ft_putchar_fd(base[n % len], fd);
}
