/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putunsigned_base_fd.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/26 17:55:08 by tmercier      #+#    #+#                 */
/*   Updated: 2022/02/04 14:43:47 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunsigned_base_fd(unsigned long n, int base, char hex, int fd)
{	
	const char	tab[37] = "0123456789abcdefghijklmnopqrstuvwxyz";
	const char	upper_tab[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (base < 2 || base > 36)
		return ;
	if (n > (unsigned long)(base - 1))
		ft_putunsigned_base_fd(n / base, base, hex, fd);
	if (hex == 'X')
		ft_putchar_fd(upper_tab[n % base], fd);
	else
		ft_putchar_fd(tab[n % base], fd);
}
