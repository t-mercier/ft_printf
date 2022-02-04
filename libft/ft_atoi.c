/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:42:33 by tmercier      #+#    #+#                 */
/*   Updated: 2021/12/15 15:25:29 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] && str[i] != '\e')
	{
		while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
			i++;
		if (str[i] == '-')
			sign = -1;
		if (str[i] == '-' || str[i] == '+')
			i++;
		while (ft_isdigit(str[i]))
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}
		return (res * sign);
	}
	return (0);
}
