/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:47:27 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:47:29 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* strlcpy() copies up to dstsize - 1 characters from the
 * string libft to dst, NUL-terminating the result if dstsize is not 0.
 * If the libft and dst strings overlap, the behavior is undefined.
 * NUL-termination if there is room.
 * NUL-termination should be included in dstsize (the length of libft).
 * Returns the total length of libft.
 * If return value is >= dstsize, the output string is truncated. */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	if (dstsize > src_len)
		ft_strcpy(dst, src);
	if (!dst)
		return (0);
	while (src[i] && (dstsize) > 1)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (src_len);
}
