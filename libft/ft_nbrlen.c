/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_nbrlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: timotheemercier <timotheemercier@student...  +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 10:27:43 by timotheemer...#+#    #+#                 */
/*   Updated: 2022/07/07 10:27:43 by timotheemer...########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(long n)
{
    int	i;

    i = 0;
    if (n == 0)
        return (EXIT_FAILURE);
    if (n < 0)
        n *= -1;
    while (n != 0 && ++i)
        n /= 10;
    return (i);
}
