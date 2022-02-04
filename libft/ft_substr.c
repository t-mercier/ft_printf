/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:48:04 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:48:06 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*_____________________________________________________________________________

Alloue (avec malloc(3)) et retourne une chaine de 
caractères issue de la chaine ’s’.
Cette nouvelle chaine commence à l’index ’start’ 
et a pour taille maximale ’len’
_____________________________________________________________________________*/

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*str;

	if (!s)
		return (0);
	s_len = ft_strlen(s) + 1;
	if (len > s_len)
		len = s_len;
	str = malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && i + start < s_len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
