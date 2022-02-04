/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 14:47:40 by tmercier      #+#    #+#                 */
/*   Updated: 2021/11/29 14:47:41 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*_____________________________________________________________________________

Applique la fonction ’f’ à chaque caractère de la
chaine de caractères passée en argument pour créer
une nouvelle chaine de caractères (avec malloc(3))
résultant des applications successives de ’f’.

RETOUR La chaine de caractères résultant des applications
successives de f. Retourne NULL si l’allocation
échoue. 
_____________________________________________________________________________*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (0);
	i = 0;
	str = ft_strdup(s);
	if (!str)
		return (0);
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
