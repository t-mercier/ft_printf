/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:43:29 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:43:30 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (i++ && n != 0)
		n /= 16;
	return (i);
}