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

/*_____________________________________________________________________________

The memset() function writes len bytes of value c (converted to an 
unsigned char) to the string b.

Returns its first argument.
_____________________________________________________________________________*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*res;
	size_t			i;

	res = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		res[i] = (unsigned char)c;
		i++;
	}
	return (res);
}
