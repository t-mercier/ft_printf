/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:47:13 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:47:14 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*_____________________________________________________________________________

Alloue (avec malloc) et retourne une nouvelle
chaine, résultat de la concaténation de s1 et s2.

-> La nouvelle chaine de caractères. NULL si l’allocation échoue.
_____________________________________________________________________________*/

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	if (!s1)
		return (ft_strdup(s2));
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(char) * (len));
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcpy(str + ft_strlen(str), s2);
	return (str);
}

// int main(void)
// {
// 	size_t len = 10;
// 	char **foo = malloc(sizeof(char *) * (len + 1));
// 	char **foo = calloc(sizeof(char *), len + 1);
// 	char *foo = "Hello, World!";
// 	char specific_char = *(foo + 3);
// }
