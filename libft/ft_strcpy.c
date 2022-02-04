/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:46:55 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:46:57 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned int	len;

	len = ft_strlen(src);
	dst[len] = '\0';
	while ((len) > 0)
	{
		len--;
		dst[len] = src[len];
	}
	return (dst);
}
