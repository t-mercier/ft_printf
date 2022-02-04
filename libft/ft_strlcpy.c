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

/*_____________________________________________________________________________

The strlcpy() function copies and concatenates strings 
with the same input parameters and output result as snprintf(3). 
strlcpy() takes the full size of the destination buffer and guarantee 
NUL-termination if there is room.  
Note that room for the NUL should be included in dstsize. 
For strlcpy() that means the length of src. 

strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
NUL-terminating the result if dstsize is not 0. 
If the src and dst strings overlap, the behavior is undefined.

RETURN -> the total length of src. 
If the return value is >= dstsize, the output string has been truncated.  
It is the caller's responsibility to handle this.
_____________________________________________________________________________*/

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

// int main(void)
// {
// 	char *dest;
// 	dest = malloc(sizeof(*dest) * 10);
// 	// memset(dest, 'r', 6);	
// 	printf("%lu\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 10));
// 	printf("%s\n\n", dest);
// 	printf("%lu\n", strlcpy(dest, "lorem ipsum dolor sit amet", 10));
// 	printf("%s\n\n", dest);
// 	free(dest);
// }