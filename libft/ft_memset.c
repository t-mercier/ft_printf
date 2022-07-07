/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:46:13 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:46:15 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* The memset() function writes len bytes of value c
 * (converted to an unsigned char) to the string b.
 * Returns its first argument. */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*res;
	size_t			i;

	res = b;
	i = -1;
	while (i < len)
		res[i++] = c;
	return (res);
}
