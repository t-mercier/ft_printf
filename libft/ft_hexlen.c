/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hexlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/27 19:56:21 by tmercier      #+#    #+#                 */
/*   Updated: 2022/02/03 16:17:18 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexlen(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}
