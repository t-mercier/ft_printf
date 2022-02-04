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

/*_____________________________________________________________________________

dstsize correspond a la memoire tampon allouee par la fonction afin de 
recevoir temporairement le resultat de dst + src, soit l'espace requis pour la 
destination. Il faut donc s'assurer que dstsize soit plus 
large que la taille allouee a destination.
Si le tampon dstsize est inferieur a dest_len (lespace allouee a 
notre destination), le resulat sera concatene afin de ne pas aller 
au dela de lespace tampon reserve au resultat.
_____________________________________________________________________________*/

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
// 	char * src = (char *)"AAAAAAAAA";
// 	size_t dstsize = 2;

// 	printf("dstsize is %zu\n", dstsize);
// 	printf("dst len : %lu\n", strlen(dst));
// 	char * s = (char *)"AAAAAAAAA";
// 	printf("src len : %lu\n", strlen(src));

// 	printf("%zu\n", ft_strlcat(dest, src, 2));
// 	printf("%s\n\n", dest);

// 	printf("\nreturn d_len is %zu\n", strlcat(dst, s, dstsize));
// 	printf("return dest string is %s\n\n", dst);
// }