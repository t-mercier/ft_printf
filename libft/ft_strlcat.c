/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:47:19 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:47:20 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* Appends a copy of the character string pointed to by libft
 * to the end of the character string pointed to by dest.
 * The character libft[0] replaces the null terminator the end
 * of dest. The resulting byte string is null-terminated.
 * The behavior is undefined if the destination array
 * is not large enough for the contents of both libft
 * and dest and the terminating null character.
 * The behavior is undefined if the strings overlap. */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	res;
	size_t	i;

	i = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize > d_len)
		res = s_len + d_len;
	else
		return (s_len + dstsize);
	while (src[i] && (d_len + 1) < dstsize)
	{
		dst[d_len] = src[i];
		d_len++;
		i++;
	}
	dst[d_len] = '\0';
	return (res);
}

// int main (void)
// {
// 	char dest[20] = "BBB";
// 	char dst[20] = "BBB";
// 	char * libft = (char *)"AAAAAAAAA";
// 	size_t dstsize = 2;

// 	printf("dstsize is %zu\n", dstsize);
// 	printf("dst len : %lu\n", strlen(dst));
// 	char * s = (char *)"AAAAAAAAA";
// 	printf("libft len : %lu\n", strlen(libft));

// 	printf("%zu\n", ft_strlcat(dest, libft, 2));
// 	printf("%s\n\n", dest);

// 	printf("\nreturn d_len is %zu\n", strlcat(dst, s, dstsize));
// 	printf("return dest string is %s\n\n", dst);
// }